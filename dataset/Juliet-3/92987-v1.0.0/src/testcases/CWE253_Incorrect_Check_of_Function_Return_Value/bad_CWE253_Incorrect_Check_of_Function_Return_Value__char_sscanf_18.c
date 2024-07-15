void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        if (sscanf(SRC_STRING, "%99s\0", data) == 0)
<END>
        {
            printLine("sscanf failed!");
        }
    }
}
