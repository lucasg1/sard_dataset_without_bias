void FUN0(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    {
        char * dataCopy = data;
        char * data = dataCopy;
        FUN0(data, data);
    }
}
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
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
    {
        char * dataCopy = data;
        char * data = dataCopy;
        FUN2(data, data);
    }
}