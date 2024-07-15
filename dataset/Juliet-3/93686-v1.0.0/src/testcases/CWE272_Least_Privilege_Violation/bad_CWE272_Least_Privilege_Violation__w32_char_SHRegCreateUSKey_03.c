void FUN0()
{
    if(5==5)
    {
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
    }
}
