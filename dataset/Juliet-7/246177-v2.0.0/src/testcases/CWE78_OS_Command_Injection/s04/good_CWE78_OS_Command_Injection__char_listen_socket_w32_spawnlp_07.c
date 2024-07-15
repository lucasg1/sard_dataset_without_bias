static int staticFive = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(staticFive==5)
    {
        strcat(data, "*.*");
    }
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
