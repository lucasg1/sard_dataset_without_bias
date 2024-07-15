int VAR0 = 0;
int VAR1 = 0;
wchar_t * FUN0(wchar_t * password);
void FUN1()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    VAR0 = 0; 
    password = FUN0(password);
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
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
wchar_t * FUN2(wchar_t * password);
void FUN3()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    VAR1 = 1; 
    password = FUN2(password);
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
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
wchar_t * FUN0(wchar_t * password)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            size_t passwordLen = 0;
            if (fgetws(password, 100, stdin) == NULL)
            {
                printLine("fgetws() failed");
                password[0] = L'\0';
            }
            passwordLen = wcslen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = L'\0';
            }
        }
    }
    return password;
}
wchar_t * FUN2(wchar_t * password)
{
    if(VAR1)
    {
        {
            size_t passwordLen = 0;
            if (fgetws(password, 100, stdin) == NULL)
            {
                printLine("fgetws() failed");
                password[0] = L'\0';
            }
            passwordLen = wcslen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = L'\0';
            }
        }
    }
    return password;
}
