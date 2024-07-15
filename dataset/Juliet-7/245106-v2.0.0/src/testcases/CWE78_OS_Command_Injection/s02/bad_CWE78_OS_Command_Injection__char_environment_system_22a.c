extern int VAR0;
char * FUN0(char * data)
{
    if(VAR0)
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    return data;
}
int VAR0 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
