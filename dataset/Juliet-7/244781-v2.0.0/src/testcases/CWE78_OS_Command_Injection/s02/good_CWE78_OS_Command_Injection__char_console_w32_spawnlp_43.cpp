namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "*.*");
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    FUN0(data);
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
