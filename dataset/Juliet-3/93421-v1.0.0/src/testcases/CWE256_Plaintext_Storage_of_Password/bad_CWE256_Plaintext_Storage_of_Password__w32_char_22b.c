int VAR0 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
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
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(char * data)
{
    if(VAR0)
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
