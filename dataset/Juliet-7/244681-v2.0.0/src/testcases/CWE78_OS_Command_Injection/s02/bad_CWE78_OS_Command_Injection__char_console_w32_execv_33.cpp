namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    {
        char * data = dataRef;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
            EXECV(COMMAND_INT_PATH, args);
<END>
        }
    }
}
} 
