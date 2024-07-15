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
    strcat(data, "*.*");
    FUN1(data);
}
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN5(char * data)
{
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
