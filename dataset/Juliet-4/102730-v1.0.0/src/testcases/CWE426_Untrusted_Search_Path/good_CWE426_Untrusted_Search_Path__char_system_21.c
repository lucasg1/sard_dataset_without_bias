static int VAR0 = 0;
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        strcpy(data, GOOD_OS_COMMAND);
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
static char * FUN2(char * data)
{
    if(VAR1)
    {
        strcpy(data, GOOD_OS_COMMAND);
    }
    return data;
}
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN2(data);
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
