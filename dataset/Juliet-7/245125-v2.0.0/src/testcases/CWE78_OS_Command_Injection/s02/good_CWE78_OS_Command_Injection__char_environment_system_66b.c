void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
