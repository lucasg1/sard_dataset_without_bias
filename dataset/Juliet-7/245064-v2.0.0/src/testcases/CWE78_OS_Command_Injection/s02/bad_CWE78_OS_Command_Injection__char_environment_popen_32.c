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
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
}
