void FUN0(char * data);
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    FUN0(data);
}
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN3(char * data)
{
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
