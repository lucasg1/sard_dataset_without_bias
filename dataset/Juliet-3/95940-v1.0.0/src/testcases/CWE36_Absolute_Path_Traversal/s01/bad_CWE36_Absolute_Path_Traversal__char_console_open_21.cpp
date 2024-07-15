namespace NAMESPACE0
{
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
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
