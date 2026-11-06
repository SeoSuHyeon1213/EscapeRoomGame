using TMPro;
using UnityEngine;

namespace FloodRoom
{
    /// <summary>Short, head-locked hints for the current puzzle step.</summary>
    public sealed class ExplainManager : MonoBehaviour
    {
        const string HintPrefab = "FloodRoomHintText";
        const float FadeSeconds = 0.25f;

        TextMeshPro explainText;
        float hideAt;

        public void Initialize(Camera view)
        {
            if (view == null) return;

            GameObject prefab = Resources.Load<GameObject>(HintPrefab);
            if (prefab == null || !prefab.TryGetComponent(out TextMeshPro prefabText))
            {
                Debug.LogWarning("FloodRoom hint text prefab is missing.", this);
                return;
            }

            explainText = Instantiate(prefabText, view.transform, false);
            explainText.name = "FloodRoom Hint";
            Hide();
        }

        public void KnockExplain() =>
            Show("Listen to the knocks.\nEach group is one keypad digit.", 13f);

        public void FlashlightExplain() =>
            Show("Take the flashlight. Look for wall marks.\nThen turn the red valve.");

        public void WaterExplain() =>
            Show("Match the water to the marked line.\nHold it there to release the hatch.");

        public void HatchExplain() =>
            Show("The hatch is open.\nFit its handle onto the drain.");

        public void DrainExplain() =>
            Show("Handle fitted.\nPress it to shut the drain.");

        public void FloodExplain() =>
            Show("Let the rising water lift you.\nLook up for the ceiling vent.");

        public void VentExplain() =>
            Show("Remove the four screws\naround the vent grille.");

        void Show(string message, float seconds = 8f)
        {
            if (explainText == null || !isActiveAndEnabled) return;

            explainText.text = message;
            explainText.alpha = 1f;
            explainText.gameObject.SetActive(true);
            hideAt = Time.unscaledTime + seconds;
        }

        public void Hide()
        {
            if (explainText != null) explainText.gameObject.SetActive(false);
        }

        void Update()
        {
            if (explainText == null || !explainText.gameObject.activeSelf) return;

            float remaining = hideAt - Time.unscaledTime;
            if (remaining <= 0f)
                Hide();
            else if (remaining < FadeSeconds)
                explainText.alpha = remaining / FadeSeconds;
        }

        void OnDisable() => Hide();

        void OnDestroy()
        {
            if (explainText != null) Destroy(explainText.gameObject);
        }
    }
}
