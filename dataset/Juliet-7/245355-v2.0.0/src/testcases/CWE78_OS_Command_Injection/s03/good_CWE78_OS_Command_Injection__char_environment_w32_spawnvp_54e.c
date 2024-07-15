void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN4(data);
}
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
void FUN0(char * data)
{
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        _spawnvp(_P_WAIT, COMMAND_INT, args);
    }
}
