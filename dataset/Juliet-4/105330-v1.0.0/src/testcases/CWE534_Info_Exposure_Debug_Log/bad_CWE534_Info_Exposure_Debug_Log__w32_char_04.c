static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char password[100] = "";
            size_t passwordLen = 0;
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
            FILE * pFile = fopen("debug.txt", "a+");
            if (fgets(password, 100, stdin) == NULL)
            {
                printLine("fgets() failed");
                password[0] = '\0';
            }
            passwordLen = strlen(password);
            if (passwordLen > 0)
            {
                password[passwordLen-1] = '\0';
            }
            if (LogonUserA(
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
<START>
            fprintf(pFile, "User attempted access with password: %s\n", password);
<END>
            if (pFile)
            {
                fclose(pFile);
            }
        }
    }
}
