extern int VAR0;
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcat(data, "*.*");
    }
    return data;
}
char * FUN1(char * data)
{
    if(VAR1)
    {
        strcat(data, "*.*");
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
char * FUN0(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
