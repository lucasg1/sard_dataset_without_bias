void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, GOOD_OS_COMMAND);
    FUN2(data);
}
void FUN5(char * data);
void FUN2(char * data)
{
    FUN5(data);
}
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN0(char * data)
{
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
