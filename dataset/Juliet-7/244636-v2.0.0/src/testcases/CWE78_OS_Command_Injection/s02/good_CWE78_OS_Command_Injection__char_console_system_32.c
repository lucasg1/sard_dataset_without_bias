void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        char * data = *dataPtr1;
        strcat(data, "*.*");
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        if (SYSTEM(data) != 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
