void FUN0()
{
    char * password;
    char * *passwordPtr1 = &password;
    char * *passwordPtr2 = &password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        char * password = *passwordPtr1;
<START>
        strcpy(password, PASSWORD);
<END>
        *passwordPtr1 = password;
    }
    {
        char * password = *passwordPtr2;
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
