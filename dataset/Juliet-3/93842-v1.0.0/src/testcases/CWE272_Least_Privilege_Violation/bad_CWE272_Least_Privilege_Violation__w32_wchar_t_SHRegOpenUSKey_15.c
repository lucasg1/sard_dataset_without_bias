void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HUSKEY hKey;
<START>
        if (SHRegOpenUSKeyW(
<END>
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    TRUE) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be opened");
        }
        else
        {
            printLine("Registry key opened successfully");
            SHRegCloseUSKey(hKey);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
