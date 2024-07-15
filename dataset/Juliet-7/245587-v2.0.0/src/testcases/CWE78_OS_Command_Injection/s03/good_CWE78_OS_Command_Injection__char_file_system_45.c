static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    VAR1 = data;
    FUN0();
}
