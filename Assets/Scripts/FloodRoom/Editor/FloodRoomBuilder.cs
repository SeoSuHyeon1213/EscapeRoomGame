using System.Linq;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

namespace FloodRoom.EditorTools
{
    /// <summary>
    /// 플레이 가능한 콘크리트 방 씬을 생성한다. 메뉴: Flood Room/Build Scene
    /// 실내 좌표: x, z = -1.3 ~ 1.3, y = 0 ~ 2.5. 플레이어는 원점에서 +z(북쪽)를 보고 시작한다.
    /// </summary>
    public static class FloodRoomBuilder
    {
        const string ScenePath = "Assets/Scenes/FloodRoom.unity";
        const string MaterialFolder = "Assets/FloodRoom/Materials";
        const string RigPrefab = "Assets/VRTemplateAssets/Prefabs/Setup/Complete XR Origin Set Up Hands Variant.prefab";
        const string PermissionsPrefab = "Assets/VRTemplateAssets/Prefabs/Setup/Hands Permissions Manager.prefab";
        const string FlashlightPrefab = "Assets/Survival Tools/Prefabs/flashlight.prefab";
        const string BatteryPrefab = "Assets/Survival Tools/Prefabs/battery.prefab";
        const string SoundFolder = "Assets/Keypad/Sounds/";

        const float HalfRoom = 1.3f;
        const float Ceiling = 2.5f;
        const float WallThickness = 0.3f;
        const float ScratchDepth = 0.002f;

        static Material concrete, darkConcrete, metal, rust, paint, waterMat, scratchMat, fadeMat, bulbMat, voidMat, ventGlowMat;

        [MenuItem("Flood Room/Build Scene")]
        public static void Build()
        {
            if (!EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo()) return;
            BuildAndSave();
        }

        /// <summary>대화상자 없이 씬을 만든다. 저장되지 않은 변경 확인은 호출자의 책임이다.</summary>
        public static string BuildAndSave()
        {
            CreateMaterials();
            EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
            ConfigureLighting();

            GameObject gameObject = new GameObject("Flood Room Game");
            gameObject.SetActive(false); // 참조를 모두 채운 뒤 활성화한다.
            FloodRoomGame game = gameObject.AddComponent<FloodRoomGame>();

            Transform room = new GameObject("Room").transform;
            BuildShell(room);
            BuildWaterAndLamp(room, game);
            BuildKeypadAndCabinet(room, game);
            BuildValves(room, game);
            BuildHatch(room, game);
            BuildVent(room, game);
            BuildScratches(room);
            BuildAudio(room, game);

            game.fadeMaterial = fadeMat;
            game.endFont = TMP_Settings.defaultFontAsset;
            game.flashlightGrab.GetComponent<FlashlightItem>().spareBattery = game.spareBatteryGrab;
            gameObject.SetActive(true);

            new GameObject("XR Interaction Manager").AddComponent<XRInteractionManager>();
            GameObject rig = (GameObject)PrefabUtility.InstantiatePrefab(AssetDatabase.LoadAssetAtPath<GameObject>(RigPrefab));
            rig.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
            PrefabUtility.InstantiatePrefab(AssetDatabase.LoadAssetAtPath<GameObject>(PermissionsPrefab));

            EditorSceneManager.SaveScene(EditorSceneManager.GetActiveScene(), ScenePath);
            AddSceneToBuild();
            return ScenePath;
        }

        // ---------- 공통 ----------

        static void CreateMaterials()
        {
            Directory(MaterialFolder);
            Material concreteSource = AssetDatabase.LoadAssetAtPath<Material>("Assets/VRTemplateAssets/Materials/Environment/Concrete Grey.mat");

            concrete = SaveMaterial("Concrete", new Material(concreteSource), new Color(0.5f, 0.5f, 0.48f));
            darkConcrete = SaveMaterial("Concrete Dark", new Material(concreteSource), new Color(0.28f, 0.28f, 0.27f));
            Texture2D concreteAlbedo = AssetDatabase.LoadAssetAtPath<Texture2D>("Assets/VRTemplateAssets/Materials/Environment/Concrete_Albedo.tif");
            concrete.SetTexture("_BaseMap", concreteAlbedo);
            darkConcrete.SetTexture("_BaseMap", concreteAlbedo);
            metal = SaveMaterial("Metal", Lit(), new Color(0.22f, 0.24f, 0.25f));
            rust = SaveMaterial("Rust", Lit(), new Color(0.3f, 0.16f, 0.09f));
            paint = SaveMaterial("Valve Red", Lit(), new Color(0.42f, 0.06f, 0.05f));
            waterMat = SaveMaterial("Water", Transparent(Lit()), new Color(0.05f, 0.11f, 0.1f, 0.82f));
            waterMat.SetFloat("_Smoothness", 0.9f);
            scratchMat = SaveMaterial("Scratch", Transparent(Unlit()), new Color(0.82f, 0.8f, 0.7f, 0f));
            fadeMat = SaveMaterial("Fade", Transparent(Unlit()), new Color(0f, 0f, 0f, 0f));
            bulbMat = SaveMaterial("Bulb", Unlit(), new Color(1f, 0.9f, 0.68f));
            voidMat = SaveMaterial("Void", Unlit(), Color.black);
            ventGlowMat = SaveMaterial("Vent Glow", Unlit(), new Color(0.2f, 0.26f, 0.3f));
            AssetDatabase.SaveAssets();
        }

        static void Directory(string path)
        {
            if (AssetDatabase.IsValidFolder(path)) return;
            string parent = System.IO.Path.GetDirectoryName(path);
            Directory(parent);
            AssetDatabase.CreateFolder(parent, System.IO.Path.GetFileName(path));
        }

        static Material Lit() => new Material(Shader.Find("Universal Render Pipeline/Lit"));
        static Material Unlit() => new Material(Shader.Find("Universal Render Pipeline/Unlit"));

        static Material Transparent(Material m)
        {
            m.SetFloat("_Surface", 1f);
            m.SetFloat("_Blend", 0f);
            m.SetFloat("_SrcBlend", (float)BlendMode.SrcAlpha);
            m.SetFloat("_DstBlend", (float)BlendMode.OneMinusSrcAlpha);
            m.SetFloat("_ZWrite", 0f);
            m.SetOverrideTag("RenderType", "Transparent");
            m.EnableKeyword("_SURFACE_TYPE_TRANSPARENT");
            m.renderQueue = (int)RenderQueue.Transparent;
            return m;
        }

        static Material SaveMaterial(string materialName, Material m, Color color)
        {
            m.SetColor("_BaseColor", color);
            string path = $"{MaterialFolder}/{materialName}.mat";
            Material existing = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (existing != null)
            {
                existing.CopyPropertiesFromMaterial(m);
                existing.shader = m.shader;
                existing.shaderKeywords = m.shaderKeywords;
                existing.renderQueue = m.renderQueue;
                existing.SetOverrideTag("RenderType", m.GetTag("RenderType", false));
                EditorUtility.SetDirty(existing);
                return existing;
            }
            AssetDatabase.CreateAsset(m, path);
            return m;
        }

        static void ConfigureLighting()
        {
            RenderSettings.skybox = null;
            RenderSettings.ambientMode = AmbientMode.Flat;
            RenderSettings.ambientLight = new Color(0.025f, 0.03f, 0.03f);
            RenderSettings.defaultReflectionMode = DefaultReflectionMode.Custom;
            RenderSettings.reflectionIntensity = 0f;
            RenderSettings.fog = true;
            RenderSettings.fogMode = FogMode.ExponentialSquared;
            RenderSettings.fogDensity = 0.12f;
            RenderSettings.fogColor = Color.black;
        }

        static void AddSceneToBuild()
        {
            var scenes = EditorBuildSettings.scenes.ToList();
            if (scenes.Any(s => s.path == ScenePath)) return;
            scenes.Add(new EditorBuildSettingsScene(ScenePath, true));
            EditorBuildSettings.scenes = scenes.ToArray();
        }

        static GameObject Box(string objectName, Transform parent, Vector3 position, Vector3 size, Material material, bool collider = true)
        {
            GameObject box = GameObject.CreatePrimitive(PrimitiveType.Cube);
            box.name = objectName;
            box.transform.SetParent(parent, false);
            box.transform.localPosition = position;
            box.transform.localScale = size;
            box.GetComponent<Renderer>().sharedMaterial = material;
            if (!collider) Object.DestroyImmediate(box.GetComponent<Collider>());
            return box;
        }

        static GameObject Cylinder(string objectName, Transform parent, Vector3 position, Vector3 scale, Material material)
        {
            GameObject cylinder = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            cylinder.name = objectName;
            cylinder.transform.SetParent(parent, false);
            cylinder.transform.localPosition = position;
            cylinder.transform.localScale = scale;
            cylinder.GetComponent<Renderer>().sharedMaterial = material;
            Object.DestroyImmediate(cylinder.GetComponent<Collider>());
            return cylinder;
        }

        /// <summary>y축을 회전축으로 하는 핸들. 가운데에 놓고 축 방향으로 얇게 만든다.</summary>
        static void WheelVisual(Transform parent, float diameter)
        {
            Cylinder("Hub", parent, Vector3.zero, new Vector3(0.05f, 0.03f, 0.05f), metal);
            const int segments = 12;
            float radius = diameter * 0.5f;
            float chord = 2f * radius * Mathf.Tan(Mathf.PI / segments) * 1.05f;
            for (int i = 0; i < segments; i++)
            {
                float angle = i * 360f / segments;
                Quaternion rotation = Quaternion.Euler(0f, angle, 0f);
                GameObject rim = Box("Rim", parent, rotation * (Vector3.forward * radius), new Vector3(chord, 0.018f, 0.018f), paint, false);
                rim.transform.localRotation = rotation;
            }
            for (int i = 0; i < 3; i++)
            {
                GameObject spoke = Box("Spoke", parent, Vector3.zero, new Vector3(0.014f, 0.012f, diameter), paint, false);
                spoke.transform.localRotation = Quaternion.Euler(0f, i * 60f, 0f);
            }
        }

        // ---------- 방 ----------

        static void BuildShell(Transform room)
        {
            float span = HalfRoom * 2f + WallThickness * 2f;
            float center = Ceiling * 0.5f;
            float offset = HalfRoom + WallThickness * 0.5f;

            Box("Floor", room, new Vector3(0f, -WallThickness * 0.5f, 0f), new Vector3(span, WallThickness, span), darkConcrete);
            Box("Ceiling", room, new Vector3(0f, Ceiling + WallThickness * 0.5f, 0f), new Vector3(span, WallThickness, span), concrete);
            Box("Wall North", room, new Vector3(0f, center, offset), new Vector3(span, Ceiling, WallThickness), concrete);
            Box("Wall South", room, new Vector3(0f, center, -offset), new Vector3(span, Ceiling, WallThickness), concrete);
            Box("Wall East", room, new Vector3(offset, center, 0f), new Vector3(WallThickness, Ceiling, span), concrete);
            Box("Wall West", room, new Vector3(-offset, center, 0f), new Vector3(WallThickness, Ceiling, span), concrete);
        }

        static void BuildWaterAndLamp(Transform room, FloodRoomGame game)
        {
            GameObject water = Box("Water", room, new Vector3(0f, 0.1f, 0f), new Vector3(HalfRoom * 2f, 0.01f, HalfRoom * 2f), waterMat, false);
            water.GetComponent<Renderer>().shadowCastingMode = ShadowCastingMode.Off;
            game.water = water.transform;

            // 남쪽 벽의 물 배출구와 쏟아지는 물줄기
            Transform outlet = Cylinder("Outlet", room, new Vector3(0f, 1.95f, -HalfRoom + 0.07f), new Vector3(0.09f, 0.08f, 0.09f), rust).transform;
            outlet.localRotation = Quaternion.Euler(90f, 0f, 0f);
            Transform anchor = new GameObject("Stream Anchor").transform;
            anchor.SetParent(room, false);
            anchor.localPosition = new Vector3(0f, 1.9f, -HalfRoom + 0.13f);
            GameObject stream = Cylinder("Stream", anchor, Vector3.zero, new Vector3(0.025f, 0.5f, 0.025f), waterMat);
            game.stream = stream.transform;

            GameObject lightObject = new GameObject("Lamp");
            lightObject.transform.SetParent(room, false);
            lightObject.transform.localPosition = new Vector3(0f, Ceiling - 0.22f, 0f);
            Light lamp = lightObject.AddComponent<Light>();
            lamp.type = LightType.Point;
            lamp.color = new Color(0.9f, 0.86f, 0.74f);
            lamp.range = 4f;
            lamp.intensity = 0.55f;
            lamp.shadows = LightShadows.None;
            game.lamp = lamp;

            Box("Lamp Cord", room, new Vector3(0f, Ceiling - 0.08f, 0f), new Vector3(0.01f, 0.16f, 0.01f), metal, false);
            GameObject bulb = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            bulb.name = "Bulb";
            bulb.transform.SetParent(room, false);
            bulb.transform.localPosition = new Vector3(0f, Ceiling - 0.2f, 0f);
            bulb.transform.localScale = Vector3.one * 0.07f;
            Object.DestroyImmediate(bulb.GetComponent<Collider>());
            bulb.GetComponent<Renderer>().sharedMaterial = bulbMat;
            game.lampBulb = bulb.GetComponent<Renderer>();
        }

        // ---------- 퍼즐 1 ----------

        static void BuildKeypadAndCabinet(Transform room, FloodRoomGame game)
        {
            Transform keypadRoot = new GameObject("Keypad").transform;
            keypadRoot.SetParent(room, false);
            keypadRoot.localPosition = new Vector3(-0.5f, 1.3f, HalfRoom - 0.02f);

            Box("Backplate", keypadRoot, Vector3.zero, new Vector3(0.34f, 0.5f, 0.03f), metal);
            KeypadPanel keypad = keypadRoot.gameObject.AddComponent<KeypadPanel>();

            Box("Screen", keypadRoot, new Vector3(0f, 0.18f, -0.018f), new Vector3(0.28f, 0.08f, 0.005f), voidMat, false);
            keypad.display = Label(keypadRoot, new Vector3(0f, 0.18f, -0.024f), 0.7f, new Color(0.65f, 0.1f, 0.06f), "");

            const float spacing = 0.09f;
            int[] layout = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
            for (int i = 0; i < layout.Length; i++)
            {
                int column = i == 9 ? 1 : i % 3; // 0은 맨 아랫줄 가운데
                int row = i / 3;
                Vector3 position = new Vector3((column - 1) * spacing, 0.08f - row * spacing, -0.025f);
                GameObject key = Box($"Key {layout[i]}", keypadRoot, position, new Vector3(0.075f, 0.075f, 0.02f), darkConcrete);
                key.AddComponent<XRSimpleInteractable>();
                keypad.digitKeys[layout[i]] = key.AddComponent<Pressable>();
                Label(keypadRoot, position + new Vector3(0f, 0f, -0.012f), 0.45f, new Color(0.8f, 0.8f, 0.75f), layout[i].ToString());
            }

            GameObject speaker = new GameObject("Keypad Audio");
            speaker.transform.SetParent(keypadRoot, false);
            keypad.audioSource = SpatialSource(speaker);
            keypad.clickClip = Clip("sfx_keypadClick.wav");
            keypad.grantedClip = Clip("sfx_keypadGranted.wav");
            keypad.deniedClip = Clip("sfx_keypadDeniedd.wav");
            game.keypad = keypad;

            // 벽에서 튀어나온 철제 수납함
            const float width = 0.46f, height = 0.34f, depth = 0.24f;
            Transform cabinet = new GameObject("Cabinet").transform;
            cabinet.SetParent(room, false);
            cabinet.localPosition = new Vector3(0.45f, 1.2f, HalfRoom - depth * 0.5f);
            HollowBox(cabinet, width, height, depth, Vector3.forward);

            Transform hinge = new GameObject("Cabinet Hinge").transform;
            hinge.SetParent(cabinet, false);
            hinge.localPosition = new Vector3(-width * 0.5f, 0f, -depth * 0.5f);
            Box("Cabinet Door", hinge, new Vector3(width * 0.5f, 0f, 0f), new Vector3(width, height, 0.012f), rust);
            RoomDoor door = hinge.gameObject.AddComponent<RoomDoor>();
            door.openEuler = new Vector3(0f, 100f, 0f);
            game.cabinetDoor = door;

            // 수납함 안의 손전등 (켜진 채로 놓여 있어 문이 열리면 빛이 샌다)
            GameObject flashlight = GrabbableProp("Flashlight", FlashlightPrefab, room,
                cabinet.localPosition + new Vector3(0f, -height * 0.5f + 0.05f, 0f), Quaternion.Euler(0f, 135f, 0f), 180f);
            GameObject spotObject = new GameObject("Beam");
            spotObject.transform.SetParent(flashlight.transform, false);
            spotObject.transform.localPosition = new Vector3(0f, 0f, 0.11f);
            Light spot = spotObject.AddComponent<Light>();
            spot.type = LightType.Spot;
            spot.spotAngle = 42f;
            spot.innerSpotAngle = 22f;
            spot.range = 6f;
            spot.intensity = 2.5f;
            spot.color = new Color(0.95f, 0.97f, 1f);
            spot.shadows = LightShadows.None;

            FlashlightItem item = flashlight.AddComponent<FlashlightItem>();
            item.spot = spot;
            game.flashlightGrab = flashlight.GetComponent<XRGrabInteractable>();
        }

        /// <summary>정면(-open 방향)이 뚫린 상자. open은 벽 쪽을 가리킨다.</summary>
        static void HollowBox(Transform parent, float width, float height, float depth, Vector3 backDirection)
        {
            const float t = 0.012f;
            bool alongZ = Mathf.Abs(backDirection.z) > 0.5f;
            Vector3 side = alongZ ? Vector3.right : Vector3.forward;

            Vector3 flatSize = alongZ ? new Vector3(width, t, depth) : new Vector3(depth, t, width);
            Vector3 sideSize = alongZ ? new Vector3(t, height, depth) : new Vector3(depth, height, t);
            Vector3 backSize = alongZ ? new Vector3(width, height, t) : new Vector3(t, height, width);

            Box("Bottom", parent, Vector3.down * height * 0.5f, flatSize, metal);
            Box("Top", parent, Vector3.up * height * 0.5f, flatSize, metal);
            Box("Side A", parent, side * width * 0.5f, sideSize, metal);
            Box("Side B", parent, -side * width * 0.5f, sideSize, metal);
            Box("Back", parent, backDirection * depth * 0.5f, backSize, metal);
        }

        /// <summary>프리팹을 감싸 중심을 잡고, 잡을 수 있고 물에 뜨는 물건으로 만든다.</summary>
        static GameObject GrabbableProp(string objectName, string prefabPath, Transform parent, Vector3 position, Quaternion rotation, float modelYaw = 0f)
        {
            GameObject root = new GameObject(objectName);
            root.transform.SetParent(parent, false);

            GameObject model = (GameObject)PrefabUtility.InstantiatePrefab(AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath), root.transform);
            model.transform.localRotation = Quaternion.Euler(0f, modelYaw, 0f) * model.transform.localRotation;
            Bounds bounds = model.GetComponentInChildren<Renderer>().bounds;
            model.transform.localPosition -= root.transform.InverseTransformPoint(bounds.center);

            BoxCollider collider = root.AddComponent<BoxCollider>();
            collider.size = bounds.size;

            root.transform.localPosition = position;
            root.transform.localRotation = rotation;
            MakeGrabbable(root, 0.3f);
            return root;
        }

        static void MakeGrabbable(GameObject root, float mass)
        {
            Rigidbody body = root.AddComponent<Rigidbody>();
            body.mass = mass;
            body.interpolation = RigidbodyInterpolation.Interpolate;
            body.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
            root.AddComponent<XRGrabInteractable>();
            root.AddComponent<FloatingItem>();
        }

        static TextMeshPro Label(Transform parent, Vector3 position, float size, Color color, string content)
        {
            GameObject labelObject = new GameObject("Label");
            labelObject.transform.SetParent(parent, false);
            labelObject.transform.localPosition = position;
            TextMeshPro label = labelObject.AddComponent<TextMeshPro>();
            label.text = content;
            label.fontSize = size;
            label.color = color;
            label.alignment = TextAlignmentOptions.Center;
            label.rectTransform.sizeDelta = new Vector2(0.3f, 0.1f);
            return label;
        }

        static AudioClip Clip(string fileName) => AssetDatabase.LoadAssetAtPath<AudioClip>(SoundFolder + fileName);

        static AudioSource SpatialSource(GameObject host)
        {
            AudioSource source = host.AddComponent<AudioSource>();
            source.spatialBlend = 1f;
            source.minDistance = 0.8f;
            source.maxDistance = 8f;
            source.rolloffMode = AudioRolloffMode.Linear;
            source.playOnAwake = false;
            return source;
        }

        // ---------- 퍼즐 2, 3: 남쪽 벽의 밸브 ----------

        static void BuildValves(Transform room, FloodRoomGame game)
        {
            float pipeZ = -HalfRoom + 0.06f;
            Cylinder("Pipe A", room, new Vector3(-0.55f, Ceiling * 0.5f, pipeZ), new Vector3(0.07f, Ceiling * 0.5f, 0.07f), rust);
            Cylinder("Pipe B", room, new Vector3(0.55f, Ceiling * 0.5f, pipeZ), new Vector3(0.07f, Ceiling * 0.5f, 0.07f), rust);

            // 수위 밸브: 누를 때마다 90도 돌고 목표 수위가 한 단계 바뀐다.
            Vector3 valvePosition = new Vector3(-0.55f, 1.05f, pipeZ + 0.1f);
            GameObject valve = Box("Valve A", room, valvePosition, new Vector3(0.24f, 0.24f, 0.05f), metal);
            valve.GetComponent<Renderer>().enabled = false;
            valve.AddComponent<XRSimpleInteractable>();
            game.valveWheel = valve.AddComponent<Pressable>();

            Transform wheel = new GameObject("Valve A Wheel").transform;
            wheel.SetParent(room, false);
            wheel.localPosition = valvePosition;
            wheel.localRotation = Quaternion.Euler(90f, 0f, 0f);
            WheelVisual(wheel, 0.22f);
            game.valveWheelVisual = wheel;

            // 배수 밸브: 핸들이 빠져 있고 축만 남았다.
            Vector3 socketPosition = new Vector3(0.55f, 1.05f, pipeZ + 0.1f);
            Cylinder("Drain Stem", room, socketPosition + new Vector3(0f, 0f, -0.05f), new Vector3(0.03f, 0.05f, 0.03f), metal)
                .transform.localRotation = Quaternion.Euler(90f, 0f, 0f);

            Transform socket = new GameObject("Drain Socket").transform;
            socket.SetParent(room, false);
            socket.localPosition = socketPosition;
            socket.localRotation = Quaternion.Euler(90f, 0f, 0f);
            game.drainSocket = socket;

            GameObject press = Box("Drain Press", room, socketPosition, new Vector3(0.24f, 0.24f, 0.05f), metal);
            press.GetComponent<Renderer>().enabled = false;
            press.AddComponent<XRSimpleInteractable>();
            game.drainSocketPress = press.AddComponent<Pressable>();
        }

        static void BuildHatch(Transform room, FloodRoomGame game)
        {
            const float width = 0.46f, height = 0.34f, depth = 0.3f;
            Transform hatch = new GameObject("Pressure Hatch").transform;
            hatch.SetParent(room, false);
            hatch.localPosition = new Vector3(HalfRoom - depth * 0.5f, 1.4f, 0.35f);
            HollowBox(hatch, width, height, depth, Vector3.right);

            Transform hinge = new GameObject("Hatch Hinge").transform;
            hinge.SetParent(hatch, false);
            hinge.localPosition = new Vector3(-depth * 0.5f, 0f, -width * 0.5f);
            Box("Hatch Door", hinge, new Vector3(0f, 0f, width * 0.5f), new Vector3(0.015f, height, width), rust);
            RoomDoor door = hinge.gameObject.AddComponent<RoomDoor>();
            door.openEuler = new Vector3(0f, -100f, 0f);
            game.hatchDoor = door;

            // 안에 든 핸들과 예비 배터리
            GameObject wheel = new GameObject("Drain Wheel");
            wheel.transform.SetParent(room, false);
            wheel.transform.localPosition = hatch.localPosition + new Vector3(0f, -height * 0.5f + 0.03f, -0.08f);
            WheelVisual(wheel.transform, 0.2f);
            BoxCollider wheelCollider = wheel.AddComponent<BoxCollider>();
            wheelCollider.size = new Vector3(0.2f, 0.03f, 0.2f);
            MakeGrabbable(wheel, 1f);
            game.drainWheelGrab = wheel.GetComponent<XRGrabInteractable>();

            GameObject battery = GrabbableProp("Spare Battery", BatteryPrefab, room,
                hatch.localPosition + new Vector3(0f, -height * 0.5f + 0.045f, 0.14f), Quaternion.identity);
            game.spareBatteryGrab = battery.GetComponent<XRGrabInteractable>();
        }

        static void BuildVent(Transform room, FloodRoomGame game)
        {
            Vector3 center = new Vector3(0.7f, Ceiling - 0.01f, 0.7f);
            const float size = 0.42f;

            // 격자 틈으로 새는 희미한 빛: 불이 꺼진 뒤에도 목표를 찾을 수 있게 한다.
            Box("Vent Glow", room, center + Vector3.up * 0.004f, new Vector3(size, 0.004f, size), ventGlowMat, false);

            Transform hinge = new GameObject("Vent Hinge").transform;
            hinge.SetParent(room, false);
            hinge.localPosition = center + new Vector3(-size * 0.5f, -0.012f, 0f);
            for (int i = 0; i < 6; i++)
            {
                float z = -size * 0.42f + i * size * 0.168f;
                Box("Slat", hinge, new Vector3(size * 0.5f, 0f, z), new Vector3(size, 0.012f, 0.035f), metal, false);
            }
            Box("Frame A", hinge, new Vector3(size * 0.5f, -0.002f, size * 0.5f), new Vector3(size, 0.016f, 0.02f), metal, false);
            Box("Frame B", hinge, new Vector3(size * 0.5f, -0.002f, -size * 0.5f), new Vector3(size, 0.016f, 0.02f), metal, false);
            RoomDoor grille = hinge.gameObject.AddComponent<RoomDoor>();
            grille.openEuler = new Vector3(0f, 0f, -110f);
            game.ventGrille = grille;

            Vector3[] corners =
            {
                new Vector3(-1f, 0f, -1f), new Vector3(1f, 0f, -1f),
                new Vector3(-1f, 0f, 1f), new Vector3(1f, 0f, 1f),
            };
            for (int i = 0; i < corners.Length; i++)
            {
                GameObject screw = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                screw.name = $"Vent Screw {i + 1}";
                screw.transform.SetParent(room, false);
                screw.transform.localPosition = center + corners[i] * (size * 0.5f) + Vector3.down * 0.03f;
                screw.transform.localScale = Vector3.one * 0.05f;
                screw.GetComponent<Renderer>().sharedMaterial = paint;
                screw.AddComponent<XRSimpleInteractable>();
                game.ventScrews[i] = screw.AddComponent<Pressable>();
            }
        }

        // ---------- 손전등으로만 보이는 단서 ----------

        static Transform ScratchGroup(Transform room, string groupName, Vector3 center)
        {
            Transform group = new GameObject(groupName).transform;
            group.SetParent(room, false);
            group.localPosition = center;
            ScratchReveal reveal = group.gameObject.AddComponent<ScratchReveal>();
            reveal.scratchMaterial = scratchMat;
            return group;
        }

        /// <summary>벽 평면(동·서쪽 벽, 좌표는 z, y) 위에 긁힌 선 하나를 그린다.</summary>
        static void Scratch(Transform group, Vector2 from, Vector2 to, float width = 0.012f)
        {
            Vector2 middle = (from + to) * 0.5f;
            Vector2 delta = to - from;
            GameObject line = Box("Scratch", group, new Vector3(0f, middle.y, middle.x), new Vector3(ScratchDepth, width, delta.magnitude + width), scratchMat, false);
            line.transform.localRotation = Quaternion.Euler(-Mathf.Atan2(delta.y, delta.x) * Mathf.Rad2Deg, 0f, 0f);
            line.GetComponent<Renderer>().shadowCastingMode = ShadowCastingMode.Off;
        }

        static void Circle(Transform group, Vector2 center, float radius)
        {
            const int segments = 10;
            for (int i = 0; i < segments; i++)
            {
                float a = i * Mathf.PI * 2f / segments;
                float b = (i + 1) * Mathf.PI * 2f / segments;
                Scratch(group, center + new Vector2(Mathf.Cos(a), Mathf.Sin(a)) * radius,
                    center + new Vector2(Mathf.Cos(b), Mathf.Sin(b)) * radius, 0.01f);
            }
        }

        static void BuildScratches(Transform room)
        {
            float eastX = HalfRoom - ScratchDepth;
            float westX = -HalfRoom + ScratchDepth;

            // 동쪽 벽: 해치 아래의 수위 눈금. 밸브 단계별로 1, 2, 3개의 금을 긋고 정답에만 원을 친다.
            Transform gauge = ScratchGroup(room, "Scratch Gauge", new Vector3(eastX, 0f, 0.35f));
            float[] levels = { 0.35f, 0.6f, 0.85f };
            for (int i = 0; i < levels.Length; i++)
            {
                Scratch(gauge, new Vector2(-0.3f, levels[i]), new Vector2(0.1f, levels[i]));
                for (int t = 0; t <= i; t++)
                    Scratch(gauge, new Vector2(0.16f + t * 0.04f, levels[i] - 0.05f), new Vector2(0.17f + t * 0.04f, levels[i] + 0.05f), 0.01f);
            }
            Circle(gauge, new Vector2(0.2f, 0.6f), 0.12f);
            // 정답 눈금에서 해치로 향하는 화살표
            Scratch(gauge, new Vector2(-0.1f, 0.62f), new Vector2(-0.1f, 1.15f));
            Scratch(gauge, new Vector2(-0.1f, 1.15f), new Vector2(-0.17f, 1.05f));
            Scratch(gauge, new Vector2(-0.1f, 1.15f), new Vector2(-0.03f, 1.05f));

            // 서쪽 벽: 먼저 갇혔던 사람의 그림. 배수 핸들 → 차오르는 물 → 떠오른 사람 → 환기구
            Transform story = ScratchGroup(room, "Scratch Story", new Vector3(westX, 0f, 0f));

            // 핸들
            Circle(story, new Vector2(-0.8f, 1.35f), 0.1f);
            Scratch(story, new Vector2(-0.88f, 1.35f), new Vector2(-0.72f, 1.35f));
            Scratch(story, new Vector2(-0.8f, 1.27f), new Vector2(-0.8f, 1.43f));
            // 화살표
            Scratch(story, new Vector2(-0.62f, 1.35f), new Vector2(-0.38f, 1.35f));
            Scratch(story, new Vector2(-0.38f, 1.35f), new Vector2(-0.45f, 1.41f));
            Scratch(story, new Vector2(-0.38f, 1.35f), new Vector2(-0.45f, 1.29f));
            // 물결과 그 위로 떠오른 사람
            for (int i = 0; i < 6; i++)
            {
                float z = -0.25f + i * 0.13f;
                Scratch(story, new Vector2(z, 1.2f), new Vector2(z + 0.065f, 1.26f));
                Scratch(story, new Vector2(z + 0.065f, 1.26f), new Vector2(z + 0.13f, 1.2f));
            }
            Circle(story, new Vector2(0.14f, 1.62f), 0.07f);
            Scratch(story, new Vector2(0.14f, 1.55f), new Vector2(0.14f, 1.32f));
            Scratch(story, new Vector2(0.14f, 1.48f), new Vector2(0.28f, 1.72f)); // 위로 뻗은 팔
            Scratch(story, new Vector2(0.14f, 1.48f), new Vector2(0.02f, 1.4f));
            // 환기구 격자
            Scratch(story, new Vector2(0.2f, 1.86f), new Vector2(0.62f, 1.86f));
            Scratch(story, new Vector2(0.2f, 2.02f), new Vector2(0.62f, 2.02f));
            for (int i = 0; i < 5; i++)
                Scratch(story, new Vector2(0.2f + i * 0.105f, 1.86f), new Vector2(0.2f + i * 0.105f, 2.02f));
        }

        // ---------- 소리 ----------

        static void BuildAudio(Transform room, FloodRoomGame game)
        {
            // 두드림은 서쪽 벽 안쪽에서 들린다.
            GameObject knock = new GameObject("Knock Source");
            knock.transform.SetParent(room, false);
            knock.transform.localPosition = new Vector3(-HalfRoom, 1.2f, 0f);
            game.knockSource = SpatialSource(knock);

            GameObject water = new GameObject("Water Source");
            water.transform.SetParent(room, false);
            water.transform.localPosition = new Vector3(0f, 1.2f, -HalfRoom + 0.15f);
            game.waterSource = SpatialSource(water);
            game.waterSource.volume = 0.3f;

            GameObject drone = new GameObject("Drone Source");
            drone.transform.SetParent(room, false);
            game.droneSource = drone.AddComponent<AudioSource>();
            game.droneSource.spatialBlend = 0f;
            game.droneSource.volume = 0.35f;
            game.droneSource.playOnAwake = false;

            GameObject effect = new GameObject("Effect Source");
            effect.transform.SetParent(room, false);
            effect.transform.localPosition = new Vector3(0f, 1.2f, -HalfRoom + 0.2f);
            game.effectSource = SpatialSource(effect);
            game.turnClip = Clip("sfx_keypadGranted.wav");
            game.stuckClip = Clip("sfx_keypadDeniedd.wav");
        }
    }
}
