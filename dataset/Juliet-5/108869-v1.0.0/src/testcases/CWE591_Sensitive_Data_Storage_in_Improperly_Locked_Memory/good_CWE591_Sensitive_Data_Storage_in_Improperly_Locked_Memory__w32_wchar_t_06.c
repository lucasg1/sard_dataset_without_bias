static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * password;
    password = L"";
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        password = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
        if(!VirtualLock(password, 100*sizeof(wchar_t)))
        {
            printLine("Memory could not be locked");
            exit(1);
        }
        wcscpy(password, L"Password1234!");
    }
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
        free(password);
    }
}
void FUN1()
{
    wchar_t * password;
    password = L"";
    if(STATIC_CONST_FIVE==5)
    {
        password = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
        if(!VirtualLock(password, 100*sizeof(wchar_t)))
        {
            printLine("Memory could not be locked");
            exit(1);
        }
        wcscpy(password, L"Password1234!");
    }
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
        free(password);
    }
}
