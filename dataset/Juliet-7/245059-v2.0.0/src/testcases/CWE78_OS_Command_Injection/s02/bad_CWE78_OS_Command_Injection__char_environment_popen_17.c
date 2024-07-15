void FUN0()
{
    int i;
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    for(i = 0; i < 1; i++)
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
