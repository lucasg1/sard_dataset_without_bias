static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    VAR1 = data;
    FUN0();
}
