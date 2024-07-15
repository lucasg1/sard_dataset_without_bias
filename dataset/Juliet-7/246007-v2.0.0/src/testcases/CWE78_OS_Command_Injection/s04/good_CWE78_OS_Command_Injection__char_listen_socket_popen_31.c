void FUN0()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            FILE *pipe;
            pipe = POPEN(data, "w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
