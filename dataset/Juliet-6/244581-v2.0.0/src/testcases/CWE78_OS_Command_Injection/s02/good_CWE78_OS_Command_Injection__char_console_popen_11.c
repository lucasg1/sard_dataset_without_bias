void FUN0()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    if(globalReturnsTrue())
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
