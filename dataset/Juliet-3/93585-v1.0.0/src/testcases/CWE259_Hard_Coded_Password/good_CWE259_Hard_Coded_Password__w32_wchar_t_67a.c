typedef struct _CWE259_Hard_Coded_Password__w32_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE259_Hard_Coded_Password__w32_wchar_t_67_structType;
void FUN0(CWE259_Hard_Coded_Password__w32_wchar_t_67_structType myStruct)
{
    wchar_t * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &pHandle) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(pHandle);
        }
        else
        {
            printLine("Unable to login.");
        }
    }
}
typedef struct _CWE259_Hard_Coded_Password__w32_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE259_Hard_Coded_Password__w32_wchar_t_67_structType;
void FUN0(CWE259_Hard_Coded_Password__w32_wchar_t_67_structType myStruct);
void FUN2()
{
    wchar_t * password;
    CWE259_Hard_Coded_Password__w32_wchar_t_67_structType myStruct;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    {
        size_t passwordLen = 0;
        if (fgetws(password, 100, stdin) == NULL)
        {
            printLine("fgetws() failed");
            password[0] = L'\0';
        }
        passwordLen = wcslen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = L'\0';
        }
    }
    myStruct.structFirst = password;
    FUN0(myStruct);
}
