void FUN0()
{
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (sscanf(SRC, "%99s\0", data) == EOF)
        {
            printLine("sscanf failed!");
        }
    }
}
