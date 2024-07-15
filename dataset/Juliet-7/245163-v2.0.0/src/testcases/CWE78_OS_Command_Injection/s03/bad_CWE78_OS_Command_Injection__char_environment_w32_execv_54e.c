void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN5()
{
    char * data;
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
    FUN3(data);
}
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN6(char * data)
{
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
        EXECV(COMMAND_INT_PATH, args);
<END>
    }
}
