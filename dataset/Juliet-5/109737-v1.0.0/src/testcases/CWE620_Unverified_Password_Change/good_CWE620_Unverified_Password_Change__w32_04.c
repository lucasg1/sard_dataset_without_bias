static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t oldPassword[256];
            wchar_t newPassword[256];
            NET_API_STATUS status;
            printWLine(L"Enter old password: ");
            if (fwscanf(stdin, L"%255s", oldPassword) != 1)
            {
                oldPassword[0] = L'\0';
            }
            printWLine(L"Enter new password: ");
            if (fwscanf(stdin, L"%255s", newPassword) != 1)
            {
                newPassword[0] = L'\0';
            }
            status = NetUserChangePassword(NULL, USERNAME, oldPassword, newPassword);
            if(status == NERR_Success)
            {
                printWLine(L"Success!");
            }
            else
            {
                wprintf(L"NetUserChangePassword failed.  Status = %u = 0x%x\n", status, status);
            }
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t oldPassword[256];
            wchar_t newPassword[256];
            NET_API_STATUS status;
            printWLine(L"Enter old password: ");
            if (fwscanf(stdin, L"%255s", oldPassword) != 1)
            {
                oldPassword[0] = L'\0';
            }
            printWLine(L"Enter new password: ");
            if (fwscanf(stdin, L"%255s", newPassword) != 1)
            {
                newPassword[0] = L'\0';
            }
            status = NetUserChangePassword(NULL, USERNAME, oldPassword, newPassword);
            if(status == NERR_Success)
            {
                printWLine(L"Success!");
            }
            else
            {
                wprintf(L"NetUserChangePassword failed.  Status = %u = 0x%x\n", status, status);
            }
        }
    }
}
