void FUN0(char * password);
void FUN1(char * password)
{
    FUN0(password);
}
void FUN1(char * password);
void FUN3(char * password)
{
    FUN1(password);
}
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
void FUN3(char * password);
void FUN6()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
<START>
    strcpy(password, PASSWORD);
<END>
    FUN3(password);
}
