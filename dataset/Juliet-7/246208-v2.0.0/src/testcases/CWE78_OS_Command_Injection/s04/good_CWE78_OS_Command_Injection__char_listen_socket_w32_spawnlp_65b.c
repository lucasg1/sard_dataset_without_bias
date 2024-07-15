void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    funcPtr(data);
}
void FUN0(char * data)
{
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
