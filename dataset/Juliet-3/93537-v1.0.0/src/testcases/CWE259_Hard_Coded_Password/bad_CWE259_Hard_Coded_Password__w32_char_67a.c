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
<START>
    strcpy(password, PASSWORD);
<END>
    myStruct.structFirst = password;
    FUN0(myStruct);
}
