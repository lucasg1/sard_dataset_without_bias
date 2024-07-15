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
            va_list args;
            va_start(args, data);
            vfprintf(stdout, "%s", args);
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
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
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
            va_list args;
            va_start(args, data);
            vfprintf(stdout, "%s", args);
            va_end(args);
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
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
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
            va_list args;
            va_start(args, data);
            vfprintf(stdout, data, args);
            va_end(args);
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
