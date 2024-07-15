void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        char * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        if (SYSTEM(data) != 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
