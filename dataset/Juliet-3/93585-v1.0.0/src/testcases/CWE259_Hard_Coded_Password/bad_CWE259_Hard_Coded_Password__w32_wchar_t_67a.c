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
<START>
    wcscpy(password, PASSWORD);
<END>
    myStruct.structFirst = password;
    FUN0(myStruct);
}
