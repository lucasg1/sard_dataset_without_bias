void FUN0(wchar_t * password);
void FUN1(wchar_t * password)
{
    FUN0(password);
}
void FUN2(wchar_t * password);
void FUN3(wchar_t * password)
{
    FUN2(password);
}
void FUN1(wchar_t * password);
void FUN2(wchar_t * password)
{
    FUN1(password);
}
void FUN0(wchar_t * password)
{
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
void FUN3(wchar_t * password);
void FUN8()
{
    wchar_t * password;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
<START>
    wcscpy(password, PASSWORD);
<END>
    FUN3(password);
}
