char * FUN0(char * data)
{
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    return data;
}
char * FUN0(char * data);
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vfprintf(stdout, data, args);
<END>
        va_end(args);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    data = FUN0(data);
    FUN2(data, data);
}
