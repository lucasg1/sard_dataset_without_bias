void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
<START>
        if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) == 0)
<END>
        {
            printLine("fread failed!");
        }
    }
}
