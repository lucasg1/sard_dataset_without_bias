void FUN0(wchar_t * passwordArray[])
{
    wchar_t * password = passwordArray[2];
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
void FUN0(wchar_t * passwordArray[]);
void FUN2()
{
    wchar_t * password;
    wchar_t * passwordArray[5];
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
<START>
    wcscpy(password, PASSWORD);
<END>
    passwordArray[2] = password;
    FUN0(passwordArray);
}
