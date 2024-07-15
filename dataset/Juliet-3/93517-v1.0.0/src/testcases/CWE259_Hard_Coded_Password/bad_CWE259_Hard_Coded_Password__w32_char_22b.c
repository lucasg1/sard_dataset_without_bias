int VAR0 = 0;
char * FUN0(char * password);
void FUN1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    VAR0 = 1; 
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
extern int VAR0;
char * FUN0(char * password)
{
    if(VAR0)
    {
<START>
        strcpy(password, PASSWORD);
<END>
    }
    return password;
}
