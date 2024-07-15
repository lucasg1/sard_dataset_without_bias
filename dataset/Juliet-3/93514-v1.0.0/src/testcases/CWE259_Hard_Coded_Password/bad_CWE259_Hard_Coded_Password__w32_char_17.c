void FUN0()
{
    int i;
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    for(i = 0; i < 1; i++)
    {
<START>
        strcpy(password, PASSWORD);
<END>
    }
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
