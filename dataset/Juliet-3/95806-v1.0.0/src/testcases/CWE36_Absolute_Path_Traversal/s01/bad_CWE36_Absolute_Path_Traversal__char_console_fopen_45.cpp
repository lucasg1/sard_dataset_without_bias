namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
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
void FUN1()
{
    char * data;
    char dataBuffer[FILENAME_MAX] = "";
    data = dataBuffer;
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
    VAR1 = data;
    FUN0();
}
} 
