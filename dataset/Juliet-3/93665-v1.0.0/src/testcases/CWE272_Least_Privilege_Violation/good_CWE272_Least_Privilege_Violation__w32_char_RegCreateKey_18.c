void FUN0()
{
    goto sink;
sink:
    {
        char * keyName = "TEST\\TestKey";
        HKEY hKey;
        if (RegCreateKeyA(
                    HKEY_CURRENT_USER,
                    keyName,
                    &hKey) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            RegCloseKey(hKey);
        }
    }
}
