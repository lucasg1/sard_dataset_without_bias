void FUN0()
{
    wchar_t * password;
    password = L"";
    while(1)
    {
        password = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
<START>
        wcscpy(password, L"Password1234!");
<END>
        break;
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
