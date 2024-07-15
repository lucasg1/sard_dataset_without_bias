void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
