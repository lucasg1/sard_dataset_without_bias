void FUN0()
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
<START>
        strcpy(password, "Password1234!");
<END>
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
