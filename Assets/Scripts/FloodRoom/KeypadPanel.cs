using System;
using TMPro;
using UnityEngine;

namespace FloodRoom
{
    /// <summary>자릿수를 다 입력하면 자동으로 판정하는 키패드.</summary>
    public class KeypadPanel : MonoBehaviour
    {
        public string code = "314";
        public Pressable[] digitKeys = new Pressable[10]; // 인덱스 = 숫자
        public TextMeshPro display;
        public AudioSource audioSource;
        public AudioClip clickClip;
        public AudioClip grantedClip;
        public AudioClip deniedClip;

        public event Action CodeAccepted;
        public event Action CodeRejected;

        string input = "";
        bool solved;

        void Start()
        {
            for (int i = 0; i < digitKeys.Length; i++)
            {
                int digit = i;
                digitKeys[i].Pressed += () => Enter(digit);
            }
            display.text = "";
        }

        public void Enter(int digit)
        {
            if (solved) return;

            input += digit;
            display.text = input;
            audioSource.PlayOneShot(clickClip);

            if (input.Length < code.Length) return;

            if (input == code)
            {
                solved = true;
                audioSource.PlayOneShot(grantedClip);
                CodeAccepted?.Invoke();
            }
            else
            {
                input = "";
                display.text = "";
                audioSource.PlayOneShot(deniedClip);
                CodeRejected?.Invoke();
            }
        }
    }
}
