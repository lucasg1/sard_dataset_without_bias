static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECVP(COMMAND_INT, args);
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        strcat(data, "*.*");
    }
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECVP(COMMAND_INT, args);
    }
}
