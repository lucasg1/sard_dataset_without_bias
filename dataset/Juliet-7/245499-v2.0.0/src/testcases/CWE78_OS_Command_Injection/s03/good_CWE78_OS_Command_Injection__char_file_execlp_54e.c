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
void FUN5(char * data)
{
    FUN1(data);
}
void FUN5(char * data);
void FUN7()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN5(data);
}
void FUN2(char * data)
{
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
