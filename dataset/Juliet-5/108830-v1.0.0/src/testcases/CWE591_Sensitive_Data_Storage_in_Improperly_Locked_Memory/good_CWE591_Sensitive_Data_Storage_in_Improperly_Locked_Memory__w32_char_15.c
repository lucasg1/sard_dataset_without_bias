void FUN0()
{
    char * password;
    password = "";
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
        break;
    }
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
void FUN1()
{
    char * password;
    password = "";
    switch(6)
    {
    case 6:
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
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
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
