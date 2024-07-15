void FUN0(char * data)
{
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    FUN0(data);
}
