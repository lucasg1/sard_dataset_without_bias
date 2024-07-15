static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        {
            size_t dataLen = strlen(data);
            if (100-dataLen > 1)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
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
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
