void FUN0()
{
    char * password;
    char * *passwordPtr1 = &password;
    char * *passwordPtr2 = &password;
    password = "";
    {
        char * password = *passwordPtr1;
        password = (char *)malloc(100*sizeof(char));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
<START>
        strcpy(password, "Password1234!");
<END>
        *passwordPtr1 = password;
    }
    {
        char * password = *passwordPtr2;
        {
            HANDLE pHandle;
            char * username = "User";
            char * domain = "Domain";
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
            free(password);
        }
    }
}
