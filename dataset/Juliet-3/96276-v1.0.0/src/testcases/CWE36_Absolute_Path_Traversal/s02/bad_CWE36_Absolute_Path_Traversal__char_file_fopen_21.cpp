namespace NAMESPACE0
{
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        {
            size_t dataLen = strlen(data);
            FILE * pFile;
            if (FILENAME_MAX-dataLen > 1)
            {
                pFile = fopen(FILENAME, "r");
                if (pFile != NULL)
                {
                    if (fgets(data+dataLen, (int)(FILENAME_MAX-dataLen), pFile) == NULL)
                    {
                        printLine("fgets() failed");
                        data[dataLen] = '\0';
                    }
                    fclose(pFile);
                }
            }
        }
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN0(data);
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
    ;
}
} 
