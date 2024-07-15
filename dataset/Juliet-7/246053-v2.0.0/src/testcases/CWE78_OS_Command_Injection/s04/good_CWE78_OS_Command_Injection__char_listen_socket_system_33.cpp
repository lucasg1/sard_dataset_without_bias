namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    {
        char * data = dataRef;
        if (SYSTEM(data) != 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
} 
