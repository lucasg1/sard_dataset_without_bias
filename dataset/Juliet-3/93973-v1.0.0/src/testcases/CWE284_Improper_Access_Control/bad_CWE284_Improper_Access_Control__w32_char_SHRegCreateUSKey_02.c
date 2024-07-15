void FUN0()
{
    if(1)
    {
        {
            char * keyName = "TEST\\TestKey";
            HUSKEY hKey = HKEY_CURRENT_USER;
<START>
            if (SHRegCreateUSKeyA(
<END>
                        keyName,
                        KEY_ALL_ACCESS,
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
}
