typedef struct _CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType;
void FUN0(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType myStruct)
{
    wchar_t * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        wchar_t * username = L"User";
        wchar_t * domain = L"Domain";
        if (LogonUserW(
                    username,
                    domain,
                    password,
                    LOGON32_LOGON_NETWORK,
                    LOGON32_PROVIDER_DEFAULT,
                    &pHandle) != 0)
        {
            printLine("User logged in successfully.");
            CloseHandle(pHandle);
        }
        else
        {
            printLine("Unable to login.");
        }
        free(password);
    }
}
typedef struct _CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType;
void FUN0(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType myStruct);
void FUN2()
{
    wchar_t * password;
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_67_structType myStruct;
    password = L"";
    password = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
<START>
    wcscpy(password, L"Password1234!");
<END>
    myStruct.structFirst = password;
    FUN0(myStruct);
}
