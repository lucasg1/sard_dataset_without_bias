void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, GOOD_OS_COMMAND);
    {
        FILE *pipe;
        pipe = POPEN(data, "wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}
