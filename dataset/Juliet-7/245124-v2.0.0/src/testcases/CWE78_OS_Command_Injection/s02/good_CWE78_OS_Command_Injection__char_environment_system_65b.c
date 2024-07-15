void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    funcPtr(data);
}
void FUN0(char * data)
{
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
