void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        {
            size_t dataLen = strlen(data);
            char * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                strncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
    }
}
