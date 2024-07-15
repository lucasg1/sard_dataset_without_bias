static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
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
    }
}
