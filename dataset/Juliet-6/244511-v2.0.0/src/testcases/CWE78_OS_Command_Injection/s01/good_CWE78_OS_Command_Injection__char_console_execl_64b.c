void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
