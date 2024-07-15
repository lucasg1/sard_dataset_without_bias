void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN1(data);
}
void FUN0(char * data)
{
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
