void FUN0()
{
    char * password;
    char * *passwordPtr1 = &password;
    char * *passwordPtr2 = &password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    {
        char * password = *passwordPtr1;
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
