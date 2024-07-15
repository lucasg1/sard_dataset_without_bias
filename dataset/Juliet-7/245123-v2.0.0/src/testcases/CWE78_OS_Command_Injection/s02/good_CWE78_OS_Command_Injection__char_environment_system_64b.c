void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
