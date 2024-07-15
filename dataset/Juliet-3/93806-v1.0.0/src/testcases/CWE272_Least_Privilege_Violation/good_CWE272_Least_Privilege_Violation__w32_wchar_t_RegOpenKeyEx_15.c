void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HKEY hKey;
        if (RegOpenKeyExW(
                    HKEY_CURRENT_USER,
                    keyName,
                    0,
                    KEY_WRITE,
                    &hKey) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be opened");
        }
        else
        {
            printLine("Registry key opened successfully");
            RegCloseKey(hKey);
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
        wchar_t * keyName = L"TEST\\TestKey";
        HKEY hKey;
        if (RegOpenKeyExW(
                    HKEY_CURRENT_USER,
                    keyName,
                    0,
                    KEY_WRITE,
                    &hKey) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be opened");
        }
        else
        {
            printLine("Registry key opened successfully");
            RegCloseKey(hKey);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
