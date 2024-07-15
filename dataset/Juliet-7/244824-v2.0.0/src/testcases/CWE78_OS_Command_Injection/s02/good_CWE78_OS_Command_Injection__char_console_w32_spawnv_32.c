void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcat(data, "*.*");
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
            _spawnv(_P_WAIT, COMMAND_INT_PATH, args);
        }
    }
}
