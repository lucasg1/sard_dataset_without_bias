void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HKEY hKey;
<START>
            if (RegCreateKeyW(
<END>
                        HKEY_LOCAL_MACHINE,
                        keyName,
                        &hKey) != ERROR_SUCCESS)
            {
                printLine("Registry key could not be created");
            }
            else
            {
                printLine("Registry key created successfully");
                RegCloseKey(hKey);
            }
        }
    }
}
