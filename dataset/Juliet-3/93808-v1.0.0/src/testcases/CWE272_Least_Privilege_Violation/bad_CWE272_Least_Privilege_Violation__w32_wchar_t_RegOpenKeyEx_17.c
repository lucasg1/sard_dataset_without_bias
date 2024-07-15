void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HKEY hKey;
<START>
            if (RegOpenKeyExW(
<END>
                        HKEY_LOCAL_MACHINE,
                        keyName,
                        0,
                        KEY_WRITE,
                        &hKey) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be opened");
            }
            else
            {
                printLine("Registry key opened successfully");
                RegCloseKey(hKey);
            }
        }
    }
}
