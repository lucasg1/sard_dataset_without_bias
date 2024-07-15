void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
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
<START>
    _spawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}
