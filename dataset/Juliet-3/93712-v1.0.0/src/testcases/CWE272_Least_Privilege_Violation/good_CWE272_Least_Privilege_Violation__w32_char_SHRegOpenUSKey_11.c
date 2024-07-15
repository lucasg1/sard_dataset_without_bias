void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * keyName = "TEST\\TestKey";
            HUSKEY hKey;
            if (SHRegOpenUSKeyA(
                        keyName,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        FALSE) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                SHRegCloseUSKey(hKey);
            }
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            char * keyName = "TEST\\TestKey";
            HUSKEY hKey;
            if (SHRegOpenUSKeyA(
                        keyName,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        FALSE) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                SHRegCloseUSKey(hKey);
            }
        }
    }
}
