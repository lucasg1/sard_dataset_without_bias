void FUN0(char * data, ...)
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
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
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
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        FUN0(data, data);
    }
}
void FUN2(char * data, ...)
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
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
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
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        FUN2(data, data);
    }
}
void FUN4(char * data, ...)
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
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        FUN4(data, data);
    }
}
void FUN6(char * data, ...)
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
void FUN7()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        strcpy(data, "fixedstringtest");
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        FUN6(data, data);
    }
}
