void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            wchar_t * password = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (password == NULL) {exit(-1);}
            size_t passwordLen = 0;
            HANDLE hUser;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            password[0] = L'\0';
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
<START>
            free(password);
<END>
        }
    }
}
