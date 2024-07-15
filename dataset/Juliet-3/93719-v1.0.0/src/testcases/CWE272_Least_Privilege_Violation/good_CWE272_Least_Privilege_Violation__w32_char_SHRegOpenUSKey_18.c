void FUN0()
{
    goto sink;
sink:
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
