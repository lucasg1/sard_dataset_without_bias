static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(STATIC_CONST_TRUE)
    {
        {
            FILE *pFile;
            pFile = fopen("passwords.txt", "r");
            if (pFile != NULL)
            {
                if (fgets(data, 100, pFile) == NULL)
                {
                    data[0] = '\0';
                }
                fclose(pFile);
            }
            else
            {
                data[0] = '\0';
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
<START>
            if (LogonUserA(
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
