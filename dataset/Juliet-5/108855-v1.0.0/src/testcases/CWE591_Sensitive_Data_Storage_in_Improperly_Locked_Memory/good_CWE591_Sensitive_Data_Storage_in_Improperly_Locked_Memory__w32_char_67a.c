typedef struct _CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType
{
    char * structFirst;
} CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType;
void FUN0(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType myStruct)
{
    char * password = myStruct.structFirst;
    {
        HANDLE pHandle;
        char * username = "User";
        char * domain = "Domain";
        if (LogonUserA(
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
typedef struct _CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType
{
    char * structFirst;
} CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType;
void FUN0(CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType myStruct);
void FUN2()
{
    char * password;
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_67_structType myStruct;
    password = "";
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
    if(!VirtualLock(password, 100*sizeof(char)))
    {
        printLine("Memory could not be locked");
        exit(1);
    }
    strcpy(password, "Password1234!");
    myStruct.structFirst = password;
    FUN0(myStruct);
}
