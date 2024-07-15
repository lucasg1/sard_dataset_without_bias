void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey;
<START>
            if (SHRegCreateUSKeyW(
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
