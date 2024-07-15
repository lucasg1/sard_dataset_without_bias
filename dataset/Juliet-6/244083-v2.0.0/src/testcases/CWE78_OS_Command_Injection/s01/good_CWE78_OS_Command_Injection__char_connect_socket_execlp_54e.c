void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN6(char * data);
void FUN3(char * data)
{
    FUN6(data);
}
void FUN5(char * data)
{
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
