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
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
