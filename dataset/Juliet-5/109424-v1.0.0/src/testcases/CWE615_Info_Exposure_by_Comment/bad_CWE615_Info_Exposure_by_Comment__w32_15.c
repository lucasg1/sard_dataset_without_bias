void FUN0()
{
    switch(6)
    {
    case 6:
    {
        size_t passwordLen = 0;
        HANDLE hUser;
        char * domain = "Domain";
        if (LogonUserA(
                    USERNAME,
                    domain,
                    PASSWORD,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &hUser) != 0)
        {
<START>
<END>
            printLine("User logged in successfully" );
            CloseHandle(hUser);
        }
        else
        {
            printLine("Unable to login.");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
