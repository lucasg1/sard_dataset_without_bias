static char * FUN0(char * password)
{
<START>
    strcpy(password, PASSWORD);
<END>
    return password;
}
void FUN1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    password = FUN0(password);
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
