void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(globalFive==5)
    {
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
}
