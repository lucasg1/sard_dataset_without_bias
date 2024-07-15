void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        strcat(data, "*.*");
        break;
    }
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    switch(6)
    {
    case 6:
        strcat(data, "*.*");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
