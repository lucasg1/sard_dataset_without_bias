void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        strcat(data, "*.*");
    }
    else
    {
        strcat(data, "*.*");
    }
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
