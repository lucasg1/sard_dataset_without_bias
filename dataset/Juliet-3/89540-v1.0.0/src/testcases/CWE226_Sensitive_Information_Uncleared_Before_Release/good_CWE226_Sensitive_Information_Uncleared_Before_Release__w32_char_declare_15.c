void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char password[100] = "";
        size_t passwordLen = 0;
        HANDLE hUser;
        char * username = "User";
        char * domain = "Domain";
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
        passwordLen = strlen(password);
        SecureZeroMemory(password, passwordLen * sizeof(char));
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char password[100] = "";
        size_t passwordLen = 0;
        HANDLE hUser;
        char * username = "User";
        char * domain = "Domain";
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
        passwordLen = strlen(password);
        SecureZeroMemory(password, passwordLen * sizeof(char));
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
