void FUN0()
{
    wchar_t * password;
    wchar_t * *passwordPtr1 = &password;
    wchar_t * *passwordPtr2 = &password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
    {
        wchar_t * password = *passwordPtr1;
<START>
        wcscpy(password, PASSWORD);
<END>
        *passwordPtr1 = password;
    }
    {
        wchar_t * password = *passwordPtr2;
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
}
