using TMPro;
using UnityEngine;

public class KeypadManager : MonoBehaviour
{
    public TMP_Text passwordScreen;
    public string correctCode = "5678";
    public Animator doorAnimator;
    public float doorStayOpenTime = 3.0f;

    private string currentInput = "";
    private bool IsOpen = false;

    public void RefreshScreen()
    {
        passwordScreen.text = currentInput;
    }

    public void ClearInput()
    {
        currentInput = "";
        RefreshScreen();
    }

    public void AddDigit(string digit)
    {
        if (currentInput.Length < correctCode.Length)
        {
            currentInput += digit;
            RefreshScreen();
        }
    }

    public void VerifyCode()
    {
        if (currentInput == correctCode)
        {
            Debug.Log("Access Granted!");
            OpenDoor();
            ClearInput();
        }
        else
        {
            Debug.Log("Access Denied!");
            ClearInput();
        }
    }

    public void OpenDoor()
    {
        if (!IsOpen)
        {
            doorAnimator.SetBool("IsOpen", true);
            IsOpen = true;
            Invoke("CloseDoor", doorStayOpenTime);
        }
    }

    public void CloseDoor()
    {
        if (IsOpen)
        {
            doorAnimator.SetBool("IsOpen", false);
            IsOpen = false;
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
