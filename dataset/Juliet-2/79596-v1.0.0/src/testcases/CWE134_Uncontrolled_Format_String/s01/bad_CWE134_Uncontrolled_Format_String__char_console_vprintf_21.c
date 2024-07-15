static int VAR0 = 0;
void FUN0(char * data, ...)
{
    if(VAR0)
    {
        {
            va_list args;
            va_start(args, data);
<START>
            vprintf(data, args);
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
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    VAR0 = 1; 
    FUN0(data, data);
}
