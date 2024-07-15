void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
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
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
