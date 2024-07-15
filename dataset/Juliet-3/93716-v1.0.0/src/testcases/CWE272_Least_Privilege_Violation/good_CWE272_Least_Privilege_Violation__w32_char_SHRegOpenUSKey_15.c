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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
