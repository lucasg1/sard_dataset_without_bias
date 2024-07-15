static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
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
    }
    if(STATIC_CONST_TRUE)
    {
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
