void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    {
        char * dataCopy = data;
        char * data = dataCopy;
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
}
