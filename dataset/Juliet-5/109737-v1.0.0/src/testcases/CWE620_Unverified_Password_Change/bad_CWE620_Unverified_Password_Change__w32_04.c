static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t newPassword[256];
            USER_INFO_1003 myUserInfo;
            NET_API_STATUS status;
            myUserInfo.usri1003_password = newPassword;
            printWLine(L"Enter new password: ");
            if (fwscanf(stdin, L"%255s", myUserInfo.usri1003_password) != 1)
            {
                myUserInfo.usri1003_password[0] = L'\0';
            }
<START>
            status = NetUserSetInfo(NULL, USERNAME, 1003, (LPBYTE)&myUserInfo, NULL);
<END>
            if(status == NERR_Success)
            {
                printWLine(L"Success!");
            }
            else
            {
                wprintf(L"NetUserSetInfo failed.  Status = %u = 0x%x\n", status, status);
            }
        }
    }
}
