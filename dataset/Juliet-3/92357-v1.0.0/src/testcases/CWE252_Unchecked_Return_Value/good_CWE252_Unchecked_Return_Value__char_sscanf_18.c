void FUN0()
{
    goto sink;
sink:
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (sscanf(SRC, "%99s\0", data) == EOF)
        {
            printLine("sscanf failed!");
        }
    }
}
