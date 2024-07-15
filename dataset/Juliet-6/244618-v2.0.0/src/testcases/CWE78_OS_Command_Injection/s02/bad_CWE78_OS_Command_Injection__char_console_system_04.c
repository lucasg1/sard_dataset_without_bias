static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(STATIC_CONST_TRUE)
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
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
