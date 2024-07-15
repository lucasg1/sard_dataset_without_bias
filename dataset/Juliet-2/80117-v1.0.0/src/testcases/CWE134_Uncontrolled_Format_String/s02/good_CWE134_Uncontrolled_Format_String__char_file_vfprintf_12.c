void FUN0(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN1(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}
void FUN2()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
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
    else
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
    if(globalReturnsTrueOrFalse())
    {
        FUN1(data, data);
    }
    else
    {
        FUN1(data, data);
    }
}
void FUN3(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}
void FUN4(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        strcpy(data, "fixedstringtest");
    }
    else
    {
        strcpy(data, "fixedstringtest");
    }
    if(globalReturnsTrueOrFalse())
    {
        FUN4(data, data);
    }
    else
    {
        FUN4(data, data);
    }
}
