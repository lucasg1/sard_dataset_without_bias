void FUN0(char * data, ...)
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
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalTrue)
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
    if(globalTrue)
    {
        FUN0(data, data);
    }
}
