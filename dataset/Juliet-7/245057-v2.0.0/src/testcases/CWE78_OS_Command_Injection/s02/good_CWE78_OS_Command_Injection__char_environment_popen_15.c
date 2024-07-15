void FUN0()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        strcat(data, "*.*");
        break;
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
    switch(6)
    {
    case 6:
        strcat(data, "*.*");
        break;
    default:
        printLine("Benign, fixed string");
        break;
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
