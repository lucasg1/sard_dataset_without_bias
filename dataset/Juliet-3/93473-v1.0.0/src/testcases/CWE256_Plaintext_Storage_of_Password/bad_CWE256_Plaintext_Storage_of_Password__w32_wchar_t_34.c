typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE256_Plaintext_Storage_of_Password__w32_wchar_t_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE256_Plaintext_Storage_of_Password__w32_wchar_t_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        FILE *pFile;
        pFile = fopen("passwords.txt", "r");
        if (pFile != NULL)
        {
            if (fgetws(data, 100, pFile) == NULL)
            {
                data[0] = L'\0';
            }
            fclose(pFile);
        }
        else
        {
            data[0] = L'\0';
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            HANDLE pHandle;
            wchar_t * username = L"User";
            wchar_t * domain = L"Domain";
<START>
            if (LogonUserW(
<END>
                        username,
                        domain,
                        data,
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
