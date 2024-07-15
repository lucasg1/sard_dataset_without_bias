extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * password = VAR0;
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
char * VAR0;
char * VAR1;
void FUN0();
void FUN2()
{
    char * password;
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
    VAR0 = password;
    FUN0();
}
