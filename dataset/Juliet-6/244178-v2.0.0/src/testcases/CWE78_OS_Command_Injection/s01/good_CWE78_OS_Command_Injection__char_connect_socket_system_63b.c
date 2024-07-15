void FUN0(char * * data);
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
