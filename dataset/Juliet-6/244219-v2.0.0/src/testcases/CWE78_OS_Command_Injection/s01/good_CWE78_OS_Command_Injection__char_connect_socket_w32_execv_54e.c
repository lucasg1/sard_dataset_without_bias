void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN1(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
void FUN7(char * data)
{
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECV(COMMAND_INT_PATH, args);
    }
}
