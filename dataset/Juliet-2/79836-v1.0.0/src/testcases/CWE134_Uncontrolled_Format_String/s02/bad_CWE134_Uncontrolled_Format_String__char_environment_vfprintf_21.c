static int VAR0 = 0;
void FUN0(char * data, ...)
{
    if(VAR0)
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
    VAR0 = 1; 
    FUN0(data, data);
}
