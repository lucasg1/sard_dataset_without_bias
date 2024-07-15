void FUN0()
{
    int h;
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        strcat(data, "*.*");
    }
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
