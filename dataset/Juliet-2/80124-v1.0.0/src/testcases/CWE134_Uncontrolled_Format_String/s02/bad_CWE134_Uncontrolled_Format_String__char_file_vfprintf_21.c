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
    VAR0 = 1; 
    FUN0(data, data);
}
