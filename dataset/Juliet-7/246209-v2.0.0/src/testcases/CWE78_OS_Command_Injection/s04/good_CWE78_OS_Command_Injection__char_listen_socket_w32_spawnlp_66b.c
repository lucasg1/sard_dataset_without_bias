void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
