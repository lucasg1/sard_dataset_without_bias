int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * password);
void FUN1()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    VAR0 = 0; 
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
char * FUN2(char * password);
void FUN3()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    VAR1 = 1; 
    password = FUN2(password);
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
extern int VAR1;
char * FUN0(char * password)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
    return password;
}
char * FUN2(char * password)
{
    if(VAR1)
    {
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
    }
    return password;
}
