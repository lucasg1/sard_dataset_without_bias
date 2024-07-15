void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    FUN0(data);
}
void FUN0(char * data)
{
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
