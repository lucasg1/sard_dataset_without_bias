void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, GOOD_OS_COMMAND);
    funcPtr(data);
}
void FUN0(char * data)
{
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}
