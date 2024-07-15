static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, "wb");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    VAR0 = data;
    FUN0();
}
