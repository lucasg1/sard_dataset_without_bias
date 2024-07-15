void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    switch(6)
    {
    case 6:
        strcpy(data, BAD_OS_COMMAND);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
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
