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
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
