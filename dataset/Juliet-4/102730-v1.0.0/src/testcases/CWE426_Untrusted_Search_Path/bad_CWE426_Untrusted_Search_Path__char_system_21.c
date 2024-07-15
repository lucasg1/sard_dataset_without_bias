static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        strcpy(data, BAD_OS_COMMAND);
    }
    return data;
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
