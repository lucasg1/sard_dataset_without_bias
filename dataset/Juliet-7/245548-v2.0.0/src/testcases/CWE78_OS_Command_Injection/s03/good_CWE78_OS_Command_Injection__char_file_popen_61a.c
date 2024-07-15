char * FUN0(char * data)
{
    strcat(data, "*.*");
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    data = FUN0(data);
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
