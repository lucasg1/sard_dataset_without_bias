void FUN0()
{
    if(1)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HUSKEY hKey = HKEY_CURRENT_USER;
<START>
            if (SHRegCreateUSKeyW(
<END>
                        keyName,
                        KEY_ALL_ACCESS,
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
    }
}
