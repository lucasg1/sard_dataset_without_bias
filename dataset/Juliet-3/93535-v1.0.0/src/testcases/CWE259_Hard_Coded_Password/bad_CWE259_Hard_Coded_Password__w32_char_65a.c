void FUN0(char * password)
{
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
void FUN0(char * password);
void FUN2()
{
    char * password;
    void (*funcPtr) (char *) = FUN0;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
<START>
    strcpy(password, PASSWORD);
<END>
    funcPtr(password);
}
