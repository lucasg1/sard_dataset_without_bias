extern int VAR0;
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR1)
    {
        strcat(data, "*.*");
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 0; 
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
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR1 = 1; 
    data = FUN1(data);
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
