using System;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit.Interactables;

namespace FloodRoom
{
    /// <summary>VR 컨트롤러로 선택하면 눌리는 물체(키패드 버튼, 밸브, 나사).</summary>
    [RequireComponent(typeof(XRSimpleInteractable))]
    public class Pressable : MonoBehaviour
    {
        public event Action Pressed;

        void Awake()
        {
            GetComponent<XRSimpleInteractable>().selectEntered.AddListener(_ => Press());
        }

        public void Press() => Pressed?.Invoke();
    }
}
