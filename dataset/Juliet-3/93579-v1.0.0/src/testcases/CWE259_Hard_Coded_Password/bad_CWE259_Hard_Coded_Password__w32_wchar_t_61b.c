wchar_t * FUN0(wchar_t * password);
void FUN1()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
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
wchar_t * FUN0(wchar_t * password)
{
<START>
    wcscpy(password, PASSWORD);
<END>
    return password;
}
