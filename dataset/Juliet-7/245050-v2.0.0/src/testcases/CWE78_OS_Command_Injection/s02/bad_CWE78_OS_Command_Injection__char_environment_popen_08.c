static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(FUN0())
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
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
