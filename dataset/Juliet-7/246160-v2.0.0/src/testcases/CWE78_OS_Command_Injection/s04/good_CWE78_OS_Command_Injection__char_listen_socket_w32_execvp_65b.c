void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    strcat(data, "*.*");
    funcPtr(data);
}
void FUN0(char * data)
{
    {
        char *args[] = {COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL};
        EXECVP(COMMAND_INT, args);
    }
}
