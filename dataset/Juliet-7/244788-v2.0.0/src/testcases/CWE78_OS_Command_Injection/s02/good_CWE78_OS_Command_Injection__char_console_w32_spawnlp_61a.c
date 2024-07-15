char * FUN0(char * data)
{
    strcat(data, "*.*");
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = FUN0(data);
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
