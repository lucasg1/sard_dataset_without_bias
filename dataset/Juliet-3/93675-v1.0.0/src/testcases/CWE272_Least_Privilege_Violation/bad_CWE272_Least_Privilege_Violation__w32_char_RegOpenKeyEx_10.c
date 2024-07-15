void FUN0()
{
    if(globalTrue)
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
<START>
            if (RegOpenKeyExA(
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
