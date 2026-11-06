using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit.Interactables;
using UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity;

namespace FloodRoom
{
    public enum GameStage { Knocking, SetLevel, InstallWheel, FinalFlood, Ended }

    /// <summary>
    /// 게임 진행과 수위를 관리한다.
    /// 1) 두드림 횟수 → 키패드 → 수납함의 손전등
    /// 2) 손전등으로 찾은 눈금에 맞춰 밸브로 수위 조절 → 수압 잠금 해치의 핸들
    /// 3) 핸들로 배수구를 직접 잠가 방을 채움 → 물에 떠올라 환기구 탈출
    /// </summary>
    public class FloodRoomGame : MonoBehaviour
    {
        // 수위가 눈금에 이 시간 이상 머물러야 해치가 열린다.
        const float LatchTolerance = 0.04f;
        const float LatchHoldSeconds = 1.5f;
        const float KnockInterval = 0.5f;
        const float KnockGroupPause = 1.8f;
        const float WheelInstallDistance = 0.2f;
        const int TotalScrews = 4;
        const float HeadAboveWater = 0.2f;
        const float HeadCeilingMargin = 0.12f;
        const float DrownMargin = 0.1f;
        const float SecondsBeforeRestart = 8f;
        const int OverlayLayer = 5; // UI 레이어: 페이드 중에는 이것만 렌더링한다.

        public static FloodRoomGame Instance { get; private set; }

        [Header("Room")]
        public float ceilingHeight = 2.5f;
        public Transform water;
        public Transform stream;
        public Light lamp;
        public Renderer lampBulb;

        [Header("Puzzle 1: knocks")]
        public KeypadPanel keypad;
        public RoomDoor cabinetDoor;
        public XRGrabInteractable flashlightGrab;
        public int[] knockGroups = { 3, 1, 4 };

        [Header("Puzzle 2: water level")]
        public Pressable valveWheel;
        public Transform valveWheelVisual;
        public float[] valveLevels = { 0.12f, 0.35f, 0.6f, 0.85f };
        public float latchLevel = 0.6f;
        public float riseSpeed = 0.03f;
        public float drainSpeed = 0.06f;
        public RoomDoor hatchDoor;
        public XRGrabInteractable spareBatteryGrab;

        [Header("Puzzle 3: flood")]
        public XRGrabInteractable drainWheelGrab;
        public Transform drainSocket;
        public Pressable drainSocketPress;
        public float floodSpeed = 0.035f;
        public float floodPauseLevel = 2.05f; // 머리가 천장 바로 아래에 닿는 높이
        public float airLossSpeed = 0.004f;   // 이후에는 숨 쉴 공간이 조금씩 줄어든다
        public Pressable[] ventScrews = new Pressable[TotalScrews];
        public RoomDoor ventGrille;

        [Header("Audio")]
        public AudioSource knockSource;
        public AudioSource waterSource;
        public AudioSource droneSource;
        public AudioSource effectSource;
        public AudioClip stuckClip;
        public AudioClip turnClip;

        [Header("Overlay")]
        public Material fadeMaterial;
        public TMP_FontAsset endFont;

        public GameStage Stage { get; private set; } = GameStage.Knocking;
        public float WaterLevel { get; private set; }
        public int ValvePosition { get; private set; }
        public bool DrainWheelInstalled { get; private set; }
        public int ScrewsRemoved { get; private set; }

        readonly HashSet<Pressable> removedScrews = new HashSet<Pressable>();
        XROrigin origin;
        GravityProvider gravity;
        AudioClip knockClip;
        float lampBase;
        float lampDip;
        float latchTimer;
        bool floating;
        Coroutine knockRoutine;
        bool drainKnockPlayed;
        FloodWaterEffects waterEffects;
        ExplainManager explanation;

        void Awake()
        {
            Instance = this;
            WaterLevel = valveLevels[0];
            lampBase = lamp.intensity;

            // 풀기 전에는 수납함과 해치 안의 물건을 잡을 수 없다.
            flashlightGrab.enabled = false;
            drainWheelGrab.enabled = false;
            spareBatteryGrab.enabled = false;
            drainSocketPress.GetComponent<XRSimpleInteractable>().enabled = false;
        }

        void Start()
        {
            origin = FindAnyObjectByType<XROrigin>();
            gravity = FindAnyObjectByType<GravityProvider>();

            knockClip = SynthAudio.Knock();
            PlayLoop(waterSource, SynthAudio.WaterLoop());
            PlayLoop(droneSource, SynthAudio.DroneLoop());
            waterEffects = new FloodWaterEffects(water, stream, lamp, flashlightGrab.GetComponent<FlashlightItem>().spot, waterSource);

            keypad.CodeAccepted += OnCodeAccepted;
            keypad.CodeRejected += OnCodeRejected;
            valveWheel.Pressed += TurnValve;
            drainSocketPress.Pressed += CloseDrain;
            RestoreVentScrewReferences();
            foreach (Pressable screw in ventScrews)
            {
                if (screw == null) continue;
                Pressable current = screw;
                current.Pressed += () => RemoveScrew(current);
            }

            if (!TryGetComponent(out explanation))
                explanation = gameObject.AddComponent<ExplainManager>();
            explanation.Initialize(origin != null ? origin.Camera : Camera.main);
            explanation.KnockExplain();

            knockRoutine = StartCoroutine(KnockLoop());
        }

        void RestoreVentScrewReferences()
        {
            if (ventGrille == null || ventGrille.transform.parent == null ||
                !System.Array.Exists(ventScrews, screw => screw == null)) return;

            foreach (Transform child in ventGrille.transform.parent)
            {
                int missing = System.Array.FindIndex(ventScrews, screw => screw == null);
                if (missing < 0) break;
                if (child.name.StartsWith("Vent Screw ", System.StringComparison.Ordinal) &&
                    child.TryGetComponent(out Pressable candidate) &&
                    System.Array.IndexOf(ventScrews, candidate) < 0)
                    ventScrews[missing] = candidate;
            }

            if (System.Array.Exists(ventScrews, screw => screw == null))
                Debug.LogWarning("FloodRoom is missing one or more vent screw references.", this);
        }

        static void PlayLoop(AudioSource source, AudioClip clip)
        {
            source.clip = clip;
            source.loop = true;
            source.Play();
        }

        void Update()
        {
            UpdateWater();
            UpdateLatch();
            UpdateDrainWheel();
            UpdateLamp();
        }

        void LateUpdate()
        {
            UpdateFloating();
            waterEffects.Update(WaterLevel, ceilingHeight, Stage == GameStage.FinalFlood,
                Stage == GameStage.Ended, origin != null ? origin.Camera : Camera.main, Time.deltaTime);
        }

        // ---------- 수위 ----------

        void UpdateWater()
        {
            if (Stage == GameStage.Ended) return;

            if (Stage == GameStage.FinalFlood)
            {
                float speed = WaterLevel < floodPauseLevel ? floodSpeed : airLossSpeed;
                WaterLevel += speed * Time.deltaTime;
                if (WaterLevel >= ceilingHeight - DrownMargin)
                    Drown();
                else if (!drainKnockPlayed && WaterLevel >= stream.parent.position.y)
                {
                    drainKnockPlayed = true;
                    StartCoroutine(PlaySubmergedKnocks());
                }
            }
            else
            {
                float target = valveLevels[ValvePosition];
                float speed = target > WaterLevel ? riseSpeed : drainSpeed;
                WaterLevel = Mathf.MoveTowards(WaterLevel, target, speed * Time.deltaTime);
            }

            Vector3 waterPosition = water.position;
            waterPosition.y = WaterLevel;
            water.position = waterPosition;
        }

        void UpdateLatch()
        {
            if (Stage != GameStage.SetLevel) return;

            latchTimer = Mathf.Abs(WaterLevel - latchLevel) <= LatchTolerance ? latchTimer + Time.deltaTime : 0f;
            if (latchTimer < LatchHoldSeconds) return;

            Stage = GameStage.InstallWheel;
            hatchDoor.Open();
            drainWheelGrab.enabled = true;
            spareBatteryGrab.enabled = true;
            effectSource.PlayOneShot(turnClip);
            explanation.HatchExplain();
            DipLamp();
        }

        // ---------- 몸이 물에 떠오른다 ----------

        void UpdateFloating()
        {
            if (origin == null) return;

            float head = origin.CameraInOriginSpaceHeight;
            float floatHeight = Mathf.Max(0f, WaterLevel + HeadAboveWater - head);
            floatHeight = Mathf.Min(floatHeight, ceilingHeight - HeadCeilingMargin - head);

            bool shouldFloat = floatHeight > 0.001f;
            if (shouldFloat != floating)
            {
                floating = shouldFloat;
                if (gravity != null) gravity.useGravity = !floating;
                if (floating && Stage == GameStage.FinalFlood) explanation.VentExplain();
            }
            if (!floating) return;

            Vector3 position = origin.transform.position;
            position.y = floatHeight;
            origin.transform.position = position;
        }

        // ---------- 퍼즐 1: 두드림 ----------

        IEnumerator KnockLoop()
        {
            var betweenKnocks = new WaitForSeconds(KnockInterval);
            var betweenGroups = new WaitForSeconds(KnockGroupPause);
            var betweenRepeats = new WaitForSeconds(7f);

            yield return new WaitForSeconds(4f);
            while (Stage == GameStage.Knocking)
            {
                foreach (int count in knockGroups)
                {
                    for (int i = 0; i < count; i++)
                    {
                        Knock(1f);
                        yield return betweenKnocks;
                    }
                    yield return betweenGroups;
                }
                yield return betweenRepeats;
            }

            // 코드를 푼 뒤에는 규칙 없이, 드물게 들려온다.
            while (Stage != GameStage.FinalFlood && Stage != GameStage.Ended)
            {
                yield return new WaitForSeconds(Random.Range(12f, 30f));
                int knocks = Random.Range(1, 3);
                for (int i = 0; i < knocks; i++)
                {
                    Knock(0.6f);
                    yield return betweenKnocks;
                }
            }
        }

        IEnumerator PlaySubmergedKnocks()
        {
            // 물줄기가 잠긴 뒤, 같은 신호가 배수 밸브 아래에서 돌아온다.
            yield return new WaitForSeconds(0.65f);
            if (Stage != GameStage.FinalFlood) yield break;

            var soundObject = new GameObject("Submerged Drain Knocks");
            soundObject.transform.SetParent(drainSocket, false);
            Vector3 position = drainSocket.position;
            position.y = drainSocket.parent.position.y + 0.08f;
            soundObject.transform.position = position;

            AudioSource source = soundObject.AddComponent<AudioSource>();
            source.playOnAwake = false;
            source.spatialBlend = 1f;
            source.spatialize = knockSource.spatialize;
            source.outputAudioMixerGroup = knockSource.outputAudioMixerGroup;
            source.rolloffMode = knockSource.rolloffMode;
            source.minDistance = knockSource.minDistance;
            source.maxDistance = knockSource.maxDistance;
            source.pitch = 0.84f;
            soundObject.AddComponent<AudioLowPassFilter>().cutoffFrequency = 680f;

            var betweenKnocks = new WaitForSeconds(KnockInterval);
            var betweenGroups = new WaitForSeconds(KnockGroupPause);
            foreach (int count in knockGroups)
            {
                for (int i = 0; i < count; i++)
                {
                    if (Stage != GameStage.FinalFlood) yield break;
                    source.PlayOneShot(knockClip, 0.9f);
                    yield return betweenKnocks;
                }
                yield return betweenGroups;
            }
        }

        void Knock(float volume)
        {
            knockSource.PlayOneShot(knockClip, volume);
            DipLamp();
        }

        void DipLamp() => lampDip = 1f;

        void OnCodeAccepted()
        {
            Stage = GameStage.SetLevel;
            cabinetDoor.Open();
            flashlightGrab.enabled = true;
            flashlightGrab.GetComponent<FlashlightItem>().Toggle(); // 문틈으로 빛이 새어 나온다.
            explanation.FlashlightExplain();
        }

        void OnCodeRejected()
        {
            // 틀리면 벽 너머에서 즉시 응답이 온다.
            Knock(1f);
            explanation.KnockExplain();
        }

        // ---------- 퍼즐 2: 밸브 ----------

        public void TurnValve()
        {
            if (Stage != GameStage.SetLevel)
            {
                effectSource.PlayOneShot(stuckClip);
                return;
            }

            ValvePosition = (ValvePosition + 1) % valveLevels.Length;
            valveWheelVisual.Rotate(0f, 90f, 0f, Space.Self);
            effectSource.PlayOneShot(turnClip);
            explanation.WaterExplain();
        }

        // ---------- 퍼즐 3: 스스로 방을 채운다 ----------

        void UpdateDrainWheel()
        {
            if (DrainWheelInstalled || !drainWheelGrab.isSelected) return;
            if (Vector3.Distance(drainWheelGrab.transform.position, drainSocket.position) < WheelInstallDistance)
                InstallDrainWheel();
        }

        public void InstallDrainWheel()
        {
            if (DrainWheelInstalled) return;

            DrainWheelInstalled = true;
            drainWheelGrab.enabled = false; // 손에서 떨어지고 소켓에 고정된다.

            Rigidbody body = drainWheelGrab.GetComponent<Rigidbody>();
            body.isKinematic = true;
            foreach (Collider c in drainWheelGrab.GetComponentsInChildren<Collider>()) c.enabled = false;

            drainWheelGrab.transform.SetPositionAndRotation(drainSocket.position, drainSocket.rotation);
            drainWheelGrab.transform.SetParent(drainSocket, true);

            drainSocketPress.GetComponent<XRSimpleInteractable>().enabled = true;
            effectSource.PlayOneShot(turnClip);
            explanation.DrainExplain();
        }

        public void CloseDrain()
        {
            if (Stage != GameStage.InstallWheel || !DrainWheelInstalled) return;

            Stage = GameStage.FinalFlood;
            if (knockRoutine != null) StopCoroutine(knockRoutine);
            drainWheelGrab.transform.Rotate(0f, 180f, 0f, Space.Self);
            effectSource.PlayOneShot(turnClip);
            StartCoroutine(KillLamp());
            explanation.FloodExplain();
        }

        IEnumerator KillLamp()
        {
            // 잠깐 깜빡이다 꺼진다. 이후에는 손전등만 남는다.
            for (int i = 0; i < 6; i++)
            {
                lamp.enabled = i % 2 == 1;
                yield return new WaitForSeconds(Random.Range(0.08f, 0.35f));
            }
            lamp.enabled = false;
            if (lampBulb != null) lampBulb.enabled = false;
        }

        void UpdateLamp()
        {
            lampDip = Mathf.MoveTowards(lampDip, 0f, Time.deltaTime * 4f);
            float noise = Mathf.PerlinNoise(Time.time * 7f, 3f);
            float stutter = noise < 0.22f ? 0.35f : 1f; // 가끔 전압이 떨어진 듯 어두워진다.
            lamp.intensity = lampBase * stutter * (1f - lampDip * 0.85f);
        }

        // ---------- 탈출 ----------

        public void RemoveScrew(Pressable screw)
        {
            // 물에 떠오르기 전에는 나사가 꿈쩍도 하지 않는다.
            if (Stage != GameStage.FinalFlood)
            {
                effectSource.PlayOneShot(stuckClip);
                return;
            }

            if (!removedScrews.Add(screw)) return; // 같은 나사는 한 번만 센다.

            ScrewsRemoved = removedScrews.Count;
            effectSource.PlayOneShot(turnClip);
            StartCoroutine(HideAfterSelection(screw.gameObject));
            if (ScrewsRemoved >= ventScrews.Length) StartCoroutine(Escape());
        }

        // 선택 이벤트 처리 중에 물체를 끄면 XR 매니저가 오류를 내므로 다음 프레임에 끈다.
        static IEnumerator HideAfterSelection(GameObject target)
        {
            yield return null;
            target.SetActive(false);
        }

        IEnumerator Escape()
        {
            Stage = GameStage.Ended;
            explanation.Hide();
            ventGrille.Open();
            yield return new WaitForSeconds(1.5f);
            yield return EndSequence("YOU GOT OUT", new Color(0f, 0f, 0f, 1f));
        }

        void Drown()
        {
            Stage = GameStage.Ended;
            explanation.Hide();
            StartCoroutine(EndSequence("THE AIR RAN OUT", new Color(0.01f, 0.03f, 0.04f, 1f)));
        }

        IEnumerator EndSequence(string message, Color fadeColor)
        {
            Camera view = origin != null ? origin.Camera : Camera.main;

            GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
            Destroy(quad.GetComponent<Collider>());
            quad.layer = OverlayLayer;
            quad.transform.SetParent(view.transform, false);
            quad.transform.localPosition = new Vector3(0f, 0f, view.nearClipPlane + 0.02f);
            quad.transform.localScale = Vector3.one;

            Material fade = new Material(fadeMaterial);
            quad.GetComponent<Renderer>().sharedMaterial = fade;

            for (float t = 0f; t < 1f; t += Time.deltaTime / 2.5f)
            {
                fadeColor.a = t;
                fade.SetColor("_BaseColor", fadeColor);
                yield return null;
            }
            fadeColor.a = 1f;
            fade.SetColor("_BaseColor", fadeColor);

            // 완전히 어두워지면 세상을 지우고 소리와 글자만 남긴다.
            view.cullingMask = 1 << OverlayLayer;
            view.clearFlags = CameraClearFlags.SolidColor;
            view.backgroundColor = Color.black;
            quad.SetActive(false); // 눈앞의 판이 글자를 가리지 않도록 치운다.
            waterSource.Stop();
            droneSource.Stop();

            GameObject textObject = new GameObject("End Text") { layer = OverlayLayer };
            textObject.transform.SetParent(view.transform, false);
            textObject.transform.localPosition = new Vector3(0f, 0f, 1.2f);
            TextMeshPro text = textObject.AddComponent<TextMeshPro>();
            text.font = endFont;
            text.text = message;
            text.fontSize = 1.2f;
            text.color = new Color(0.75f, 0.75f, 0.72f);
            text.alignment = TextAlignmentOptions.Center;
            text.rectTransform.sizeDelta = new Vector2(3f, 1f);

            // 벗어났다고 끝이 아니다. 똑같은 두드림이 어둠 속에서 다시 들린다.
            yield return new WaitForSeconds(2f);
            foreach (int count in knockGroups)
            {
                for (int i = 0; i < count; i++)
                {
                    effectSource.PlayOneShot(knockClip);
                    yield return new WaitForSeconds(0.5f);
                }
                yield return new WaitForSeconds(0.8f);
            }

            yield return new WaitForSeconds(SecondsBeforeRestart);
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }

        void OnDestroy()
        {
            if (Instance == this) Instance = null;
        }
    }
}
