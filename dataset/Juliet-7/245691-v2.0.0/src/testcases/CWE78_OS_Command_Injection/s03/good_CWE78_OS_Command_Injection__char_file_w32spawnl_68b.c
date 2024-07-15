char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    VAR1 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR1;
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
