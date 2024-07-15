void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
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
