void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
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
    FUN1(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN4(char * data)
{
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, "w");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
