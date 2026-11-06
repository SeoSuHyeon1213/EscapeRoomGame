using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

namespace FloodRoom
{
    /// <summary>
    /// 처음 잡은 순간부터 배터리가 닳는 손전등. 트리거로 켜고 끄며,
    /// 예비 배터리를 잡아 가까이 대면 충전된다.
    /// </summary>
    [RequireComponent(typeof(XRGrabInteractable))]
    public class FlashlightItem : MonoBehaviour
    {
        const float BatteryContactDistance = 0.2f;
        const float MinimumCharge = 0.12f; // 완전히 꺼져 진행이 막히는 일은 없게 한다.
        const float LowChargeThreshold = 0.3f;

        public static FlashlightItem Current { get; private set; }

        public Light spot;
        public float fullBatterySeconds = 240f;
        public XRGrabInteractable spareBattery;

        float baseIntensity;
        bool isOn;
        bool everHeld;
        float charge = 1f;

        public bool IsOn => isOn;
        public float Charge => charge;

        void Awake()
        {
            Current = this;
            baseIntensity = spot.intensity;
            spot.enabled = false; // 빛은 벽을 통과하므로 수납함이 열리기 전에는 꺼 둔다.

            XRGrabInteractable grab = GetComponent<XRGrabInteractable>();
            grab.selectEntered.AddListener(_ => everHeld = true);
            grab.activated.AddListener(_ => Toggle());
        }

        public void Toggle()
        {
            isOn = !isOn;
            spot.enabled = isOn;
        }

        public void Recharge() => charge = 1f;

        void Update()
        {
            if (everHeld && isOn)
                charge = Mathf.Max(MinimumCharge, charge - Time.deltaTime / fullBatterySeconds);

            // 전력이 약해지면 빛이 어두워지고 불안정하게 떨린다.
            float flicker = charge < LowChargeThreshold ? Mathf.PerlinNoise(Time.time * 9f, 0f) : 1f;
            spot.intensity = baseIntensity * Mathf.Lerp(0.25f, 1f, charge) * Mathf.Lerp(0.5f, 1f, flicker);

            if (spareBattery != null && spareBattery.isSelected &&
                Vector3.Distance(spareBattery.transform.position, transform.position) < BatteryContactDistance)
            {
                Recharge();
                Destroy(spareBattery.gameObject);
                spareBattery = null;
            }
        }
    }
}
