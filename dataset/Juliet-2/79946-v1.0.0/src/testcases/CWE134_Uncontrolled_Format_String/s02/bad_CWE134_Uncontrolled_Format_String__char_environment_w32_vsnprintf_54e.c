void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN2(char * data)
{
    FUN4(data);
}
void FUN1(char * data);
void FUN7()
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
    FUN1(data);
}
void FUN8(char * data, ...)
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
void FUN4(char * data)
{
    FUN8(data, data);
}