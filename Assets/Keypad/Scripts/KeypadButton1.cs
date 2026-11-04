using UnityEngine;

public class KeypadButton : MonoBehaviour
{
    public KeypadManager keypad;
    public string buttonVal;

    public void OnPressButton()
    {
        if (buttonVal == "Enter")
        {
            keypad.VerifyCode();
        }
        else
        {
            keypad.AddDigit(buttonVal);
        }
    }


    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
