void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
