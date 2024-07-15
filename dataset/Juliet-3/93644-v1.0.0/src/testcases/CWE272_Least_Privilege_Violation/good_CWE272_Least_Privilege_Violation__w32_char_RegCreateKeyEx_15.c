void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * keyName = "TEST\\TestKey";
        HKEY hKey;
        if (RegCreateKeyExA(
                    HKEY_CURRENT_USER,
                    keyName,
                    0,
                    NULL,
                    REG_OPTION_NON_VOLATILE,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    NULL) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
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
        char * keyName = "TEST\\TestKey";
        HKEY hKey;
        if (RegCreateKeyExA(
                    HKEY_CURRENT_USER,
                    keyName,
                    0,
                    NULL,
                    REG_OPTION_NON_VOLATILE,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    NULL) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            RegCloseKey(hKey);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
