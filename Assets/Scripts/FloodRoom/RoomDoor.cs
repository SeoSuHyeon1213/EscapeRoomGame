using System.Collections;
using UnityEngine;

namespace FloodRoom
{
    /// <summary>경첩 기준으로 한 번만 열리는 문.</summary>
    public class RoomDoor : MonoBehaviour
    {
        public Vector3 openEuler = new Vector3(0f, 100f, 0f);
        public float duration = 1.2f;

        public bool IsOpen { get; private set; }

        public void Open()
        {
            if (IsOpen) return;
            IsOpen = true;
            StartCoroutine(Swing());
        }

        IEnumerator Swing()
        {
            Quaternion from = transform.localRotation;
            Quaternion to = from * Quaternion.Euler(openEuler);
            for (float t = 0f; t < 1f; t += Time.deltaTime / duration)
            {
                transform.localRotation = Quaternion.Slerp(from, to, Mathf.SmoothStep(0f, 1f, t));
                yield return null;
            }
            transform.localRotation = to;
        }
    }
}
