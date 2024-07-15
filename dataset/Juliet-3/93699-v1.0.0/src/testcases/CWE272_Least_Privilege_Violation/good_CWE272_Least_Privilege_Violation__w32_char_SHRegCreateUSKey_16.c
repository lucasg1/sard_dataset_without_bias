void FUN0()
{
    while(1)
    {
        {
            char * keyName = "TEST\\TestKey";
            HUSKEY hKey;
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
        break;
    }
}
