void FUN0(char * data, ...)
{
    {
        char dest[100] = "";
        va_list args;
        va_start(args, data);
<START>
        vsnprintf(dest, 100-1, data, args);
<END>
        va_end(args);
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        FUN0(data, data);
    }
}
