static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(char * data, ...)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[100] = "";
            va_list args;
            va_start(args, data);
            vsnprintf(dest, 100-1, "%s", args);
            va_end(args);
            printLine(dest);
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
    VAR0 = 0; 
    FUN0(data, data);
}
void FUN2(char * data, ...)
{
    if(VAR1)
    {
        {
            char dest[100] = "";
            va_list args;
            va_start(args, data);
            vsnprintf(dest, 100-1, "%s", args);
            va_end(args);
            printLine(dest);
        }
    }
}
void FUN3()
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
    VAR1 = 1; 
    FUN2(data, data);
}
void FUN4(char * data, ...)
{
    if(VAR2)
    {
        {
            char dest[100] = "";
            va_list args;
            va_start(args, data);
            vsnprintf(dest, 100-1, data, args);
            va_end(args);
            printLine(dest);
        }
    }
}
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    VAR2 = 1; 
    FUN4(data, data);
}
