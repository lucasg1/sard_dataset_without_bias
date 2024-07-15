typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE259_Hard_Coded_Password__w32_char_34_unionType;
void FUN0()
{
    char * password;
    CWE259_Hard_Coded_Password__w32_char_34_unionType myUnion;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
<START>
    strcpy(password, PASSWORD);
<END>
    myUnion.unionFirst = password;
    {
        char * password = myUnion.unionSecond;
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
}
