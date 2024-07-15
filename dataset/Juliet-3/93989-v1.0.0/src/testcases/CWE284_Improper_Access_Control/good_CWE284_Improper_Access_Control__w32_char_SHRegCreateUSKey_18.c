void FUN0()
{
    goto sink;
sink:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey = HKEY_CURRENT_USER;
        if (SHRegCreateUSKeyA(
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    SHREGSET_HKCU) != ERROR_SUCCESS)
        {
            printLine("Registry key could not be created");
        }
        else
        {
            printLine("Registry key created successfully");
            SHRegCloseUSKey(hKey);
        }
    }
}
