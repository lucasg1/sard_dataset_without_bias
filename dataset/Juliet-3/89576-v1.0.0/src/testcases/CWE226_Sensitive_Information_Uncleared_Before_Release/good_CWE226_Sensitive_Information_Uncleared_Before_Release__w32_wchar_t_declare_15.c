void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t password[100] = L"";
        size_t passwordLen = 0;
        HANDLE hUser;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
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
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &hUser) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(hUser);
        }
        else
        {
            printLine("Unable to login.");
        }
        passwordLen = wcslen(password);
        SecureZeroMemory(password, passwordLen * sizeof(wchar_t));
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        wchar_t password[100] = L"";
        size_t passwordLen = 0;
        HANDLE hUser;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
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
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &hUser) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(hUser);
        }
        else
        {
            printLine("Unable to login.");
        }
        passwordLen = wcslen(password);
        SecureZeroMemory(password, passwordLen * sizeof(wchar_t));
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
