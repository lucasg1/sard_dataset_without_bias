void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
            if (SHRegOpenUSKeyW(
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
