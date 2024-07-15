void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HKEY hKey;
            if (RegCreateKeyW(
                        HKEY_CURRENT_USER,
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
void FUN1()
{
    if(1)
    {
        {
            wchar_t * keyName = L"TEST\\TestKey";
            HKEY hKey;
            if (RegCreateKeyW(
                        HKEY_CURRENT_USER,
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
