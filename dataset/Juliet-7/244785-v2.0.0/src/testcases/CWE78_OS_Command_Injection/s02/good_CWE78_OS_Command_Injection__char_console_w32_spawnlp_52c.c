void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN3(char * data)
{
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
