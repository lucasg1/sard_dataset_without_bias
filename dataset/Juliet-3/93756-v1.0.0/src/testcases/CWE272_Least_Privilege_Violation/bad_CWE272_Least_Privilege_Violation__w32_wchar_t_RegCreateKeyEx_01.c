void FUN0()
{
    {
        wchar_t * keyName = L"TEST\\TestKey";
        HKEY hKey;
<START>
        if (RegCreateKeyExW(
<END>
                    HKEY_LOCAL_MACHINE,
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
}
