void FUN0()
{
    char * password;
    char passwordBuffer[100] = "";
    password = passwordBuffer;
    switch(6)
    {
    case 6:
<START>
        strcpy(password, PASSWORD);
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
    }
}
