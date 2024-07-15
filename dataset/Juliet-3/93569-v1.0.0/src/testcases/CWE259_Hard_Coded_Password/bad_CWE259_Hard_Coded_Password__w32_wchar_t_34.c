typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE259_Hard_Coded_Password__w32_wchar_t_34_unionType;
void FUN0()
{
    wchar_t * password;
    CWE259_Hard_Coded_Password__w32_wchar_t_34_unionType myUnion;
    wchar_t passwordBuffer[100] = L"";
    password = passwordBuffer;
<START>
    wcscpy(password, PASSWORD);
<END>
    myUnion.unionFirst = password;
    {
        wchar_t * password = myUnion.unionSecond;
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
