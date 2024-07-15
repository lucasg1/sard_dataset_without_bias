namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "*.*");
}
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    FUN0(data);
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
