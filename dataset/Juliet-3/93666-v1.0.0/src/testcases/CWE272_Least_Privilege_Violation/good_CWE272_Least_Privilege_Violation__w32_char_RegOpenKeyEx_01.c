void FUN0()
{
    {
        char * keyName = "TEST\\TestKey";
        HKEY hKey;
        if (RegOpenKeyExA(
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
