void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    while(1)
    {
        strcat(data, "*.*");
        break;
    }
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
