int VAR0 = 0;
char * FUN0(char * password);
void FUN1()
{
    char * password;
    password = "";
    VAR0 = 1; 
    password = FUN0(password);
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
extern int VAR0;
char * FUN0(char * password)
{
    if(VAR0)
    {
        password = (char *)malloc(100*sizeof(char));
        if (password == NULL)
        {
            printLine("Memory could not be allocated");
            exit(1);
        }
<START>
        strcpy(password, "Password1234!");
<END>
    }
    return password;
}
