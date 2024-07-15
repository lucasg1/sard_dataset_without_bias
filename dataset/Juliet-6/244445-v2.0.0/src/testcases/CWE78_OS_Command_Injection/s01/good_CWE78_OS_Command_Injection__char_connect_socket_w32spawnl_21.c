static int VAR0 = 0;
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        strcat(data, "*.*");
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    _spawnl(_P_WAIT, COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
