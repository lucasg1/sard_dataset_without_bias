namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
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
    }
    else
    {
        strcat(data, "c:\\temp\\file.txt");
        strcat(data, "/tmp/file.txt");
    }
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
