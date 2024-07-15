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
void FUN1()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
