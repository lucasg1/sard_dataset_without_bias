void FUN0()
{
    if(5==5)
    {
        {
            wchar_t password[100] = L"";
            size_t passwordLen = 0;
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
            FILE * pFile = fopen("debug.txt", "a+");
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
                        &pHandle) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(pHandle);
            }
            else
            {
                printLine("Unable to login.");
            }
<START>
            fwprintf(pFile, L"User attempted access with password: %s\n", password);
<END>
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}
