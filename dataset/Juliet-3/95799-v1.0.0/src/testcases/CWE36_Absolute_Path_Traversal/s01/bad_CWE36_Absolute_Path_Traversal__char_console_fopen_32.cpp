namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        {
            size_t dataLen = strlen(data);
            if (FILENAME_MAX-dataLen > 1)
            {
                if (fgets(data+dataLen, (int)(FILENAME_MAX-dataLen), stdin) != NULL)
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
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            FILE *pFile = NULL;
<START>
            pFile = FOPEN(data, "wb+");
<END>
            if (pFile != NULL)
            {
                fclose(pFile);
            }
        }
    }
}
} 
