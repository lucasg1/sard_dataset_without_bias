void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey;
<START>
        if (SHRegOpenUSKeyA(
<END>
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    TRUE) != ERROR_SUCCESS)
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
