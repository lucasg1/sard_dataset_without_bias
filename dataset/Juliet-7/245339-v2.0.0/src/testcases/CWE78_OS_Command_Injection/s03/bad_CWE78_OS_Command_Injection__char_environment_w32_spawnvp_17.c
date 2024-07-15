void FUN0()
{
    int i;
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
<START>
        _spawnvp(_P_WAIT, COMMAND_INT, args);
<END>
    }
}
