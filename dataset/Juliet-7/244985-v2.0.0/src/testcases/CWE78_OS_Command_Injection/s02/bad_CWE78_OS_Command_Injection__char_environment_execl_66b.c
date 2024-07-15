void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
