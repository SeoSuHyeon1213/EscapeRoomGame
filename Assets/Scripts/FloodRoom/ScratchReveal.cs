using UnityEngine;

namespace FloodRoom
{
    /// <summary>손전등을 직접 비췄을 때만 드러나는 벽의 긁힌 자국.</summary>
    public class ScratchReveal : MonoBehaviour
    {
        const float FadeSpeed = 2.5f;

        public Material scratchMaterial;
        public float revealAlpha = 0.9f;

        Material instance;
        Bounds area;
        Color color;
        float alpha;

        public float Alpha => alpha;

        void Start()
        {
            instance = new Material(scratchMaterial);
            color = instance.GetColor("_BaseColor");
            area = new Bounds(transform.position, Vector3.zero);
            bool first = true;
            foreach (Renderer r in GetComponentsInChildren<Renderer>())
            {
                r.sharedMaterial = instance;
                if (first) area = r.bounds;
                else area.Encapsulate(r.bounds);
                first = false;
            }
            Apply();
        }

        void Update()
        {
            alpha = Mathf.MoveTowards(alpha, IsLit() ? revealAlpha : 0f, FadeSpeed * Time.deltaTime);
            Apply();
        }

        bool IsLit()
        {
            FlashlightItem flashlight = FlashlightItem.Current;
            if (flashlight == null || !flashlight.IsOn) return false;

            // 그림 전체 중 빛의 중심에 가장 가까운 지점이 원뿔 안에 들어오는지 본다.
            Transform beam = flashlight.spot.transform;
            float distance = Vector3.Distance(beam.position, area.center);
            if (distance > flashlight.spot.range) return false;

            Vector3 nearest = area.ClosestPoint(beam.position + beam.forward * distance);
            return Vector3.Angle(beam.forward, nearest - beam.position) < flashlight.spot.spotAngle * 0.5f;
        }

        void Apply()
        {
            color.a = alpha;
            instance.SetColor("_BaseColor", color);
        }

        void OnDestroy()
        {
            if (instance != null) Destroy(instance);
        }
    }
}
