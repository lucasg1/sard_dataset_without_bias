void FUN0()
{
    goto sink;
sink:
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
}
