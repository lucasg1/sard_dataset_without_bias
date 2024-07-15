void FUN0(char * data, ...)
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
void FUN1()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        FUN0(data, data);
    }
}
