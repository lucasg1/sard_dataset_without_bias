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
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
