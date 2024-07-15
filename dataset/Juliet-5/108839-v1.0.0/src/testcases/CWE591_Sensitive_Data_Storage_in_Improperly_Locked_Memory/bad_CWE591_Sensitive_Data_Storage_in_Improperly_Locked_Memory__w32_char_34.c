typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_34_unionType;
void FUN0()
{
    char * password;
    CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_34_unionType myUnion;
    password = "";
    password = (char *)malloc(100*sizeof(char));
    if (password == NULL)
    {
        printLine("Memory could not be allocated");
        exit(1);
    }
<START>
    strcpy(password, "Password1234!");
<END>
    myUnion.unionFirst = password;
    {
        char * password = myUnion.unionSecond;
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
}
