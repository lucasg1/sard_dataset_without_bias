typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE256_Plaintext_Storage_of_Password__w32_char_34_unionType;
void FUN0()
{
    char * data;
    CWE256_Plaintext_Storage_of_Password__w32_char_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
