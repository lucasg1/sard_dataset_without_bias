void FUN0()
{
    while(1)
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
        break;
    }
}
