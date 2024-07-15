namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, BAD_OS_COMMAND);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
} 
