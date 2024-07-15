typedef struct _CWE259_Hard_Coded_Password__w32_char_67_structType
{
    char * structFirst;
} CWE259_Hard_Coded_Password__w32_char_67_structType;
void FUN0(CWE259_Hard_Coded_Password__w32_char_67_structType myStruct)
{
    char * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        if (LogonUserA(
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
typedef struct _CWE259_Hard_Coded_Password__w32_char_67_structType
{
    char * structFirst;
} CWE259_Hard_Coded_Password__w32_char_67_structType;
void FUN0(CWE259_Hard_Coded_Password__w32_char_67_structType myStruct);
void FUN2()
{
    char * password;
    CWE259_Hard_Coded_Password__w32_char_67_structType myStruct;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        size_t passwordLen = 0;
        if (fgets(password, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            password[0] = '\0';
        }
        passwordLen = strlen(password);
        if (passwordLen > 0)
        {
            password[passwordLen-1] = '\0';
        }
    }
    myStruct.structFirst = password;
    FUN0(myStruct);
}
