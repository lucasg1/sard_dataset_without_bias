void FUN0(char * * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
