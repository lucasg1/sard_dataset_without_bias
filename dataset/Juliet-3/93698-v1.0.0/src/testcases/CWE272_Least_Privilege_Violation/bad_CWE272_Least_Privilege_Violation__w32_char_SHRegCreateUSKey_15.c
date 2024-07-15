void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * keyName = "TEST\\TestKey";
        HUSKEY hKey;
<START>
        if (SHRegCreateUSKeyA(
<END>
                    keyName,
                    KEY_WRITE,
                    NULL,
                    &hKey,
                    SHREGSET_HKLM) != ERROR_SUCCESS)
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
