void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(1)
    {
        strcat(data, "*.*");
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
