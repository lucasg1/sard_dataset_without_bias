void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * keyName = "TEST\\TestKey";
            HKEY hKey;
<START>
            if (RegCreateKeyExA(
<END>
                        HKEY_LOCAL_MACHINE,
                        keyName,
                        0,
                        NULL,
                        REG_OPTION_NON_VOLATILE,
                        KEY_WRITE,
                        NULL,
                        &hKey,
                        NULL) != ERROR_SUCCESS)
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
