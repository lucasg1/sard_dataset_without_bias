void FUN0()
{
    char * password;
    password = "";
    goto source;
source:
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
    if(!VirtualLock(password, 100*sizeof(char)))
    {
        printLine("Memory could not be locked");
        exit(1);
    }
    strcpy(password, "Password1234!");
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
