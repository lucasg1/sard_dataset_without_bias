void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalFive==5)
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
    if(globalFive==5)
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
