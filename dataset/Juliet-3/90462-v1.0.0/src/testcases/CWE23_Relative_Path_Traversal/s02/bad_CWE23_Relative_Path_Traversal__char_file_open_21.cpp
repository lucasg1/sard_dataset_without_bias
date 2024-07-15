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
    char dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN0(data);
    {
        int fileDesc;
<START>
        fileDesc = OPEN(data, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    ;
}
} 
