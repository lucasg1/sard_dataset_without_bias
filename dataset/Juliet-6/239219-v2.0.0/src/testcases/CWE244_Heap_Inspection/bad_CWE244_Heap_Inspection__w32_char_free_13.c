void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char * password = (char *)malloc(100*sizeof(char));
            if (password == NULL) {exit(-1);}
            size_t passwordLen = 0;
            HANDLE hUser;
            char * username = "User";
            char * domain = "Domain";
            password[0] = '\0';
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
                        &hUser) != 0)
            {
                printLine("User logged in successfully.");
                CloseHandle(hUser);
            }
            else
            {
                printLine("Unable to login.");
            }
<START>
            free(password);
<END>
        }
    }
}
