void FUN0()
{
    int h;
    char * data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    for(h = 0; h < 1; h++)
    {
        strcat(data, "*.*");
    }
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
