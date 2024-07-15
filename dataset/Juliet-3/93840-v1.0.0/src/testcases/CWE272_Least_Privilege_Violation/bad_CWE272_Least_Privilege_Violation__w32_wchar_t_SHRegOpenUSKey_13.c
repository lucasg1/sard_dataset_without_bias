void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
<START>
            if (SHRegOpenUSKeyW(
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
    }
}
