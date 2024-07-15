void FUN0()
{
    goto sink;
sink:
    {
        char password[100] = "";
        size_t passwordLen = 0;
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
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
<START>
        fprintf(stderr, "User attempted access with password: %s\n", password);
<END>
    }
}
