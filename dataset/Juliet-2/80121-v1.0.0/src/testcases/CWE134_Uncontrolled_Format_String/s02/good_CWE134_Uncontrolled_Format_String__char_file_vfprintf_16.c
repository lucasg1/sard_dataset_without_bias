void FUN0(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, "%s", args);
        va_end(args);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    while(1)
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
        break;
    }
    while(1)
    {
        FUN0(data, data);
        break;
    }
}
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    while(1)
    {
        strcpy(data, "fixedstringtest");
        break;
    }
    while(1)
    {
        FUN2(data, data);
        break;
    }
}
