namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    {
        char * data = dataRef;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            _spawnvp(_P_WAIT, COMMAND_INT, args);
        }
    }
}
} 
