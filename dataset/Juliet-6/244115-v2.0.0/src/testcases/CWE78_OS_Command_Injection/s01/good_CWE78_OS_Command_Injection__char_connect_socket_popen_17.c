void FUN0()
{
    int h;
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    for(h = 0; h < 1; h++)
    {
        strcat(data, "*.*");
    }
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
