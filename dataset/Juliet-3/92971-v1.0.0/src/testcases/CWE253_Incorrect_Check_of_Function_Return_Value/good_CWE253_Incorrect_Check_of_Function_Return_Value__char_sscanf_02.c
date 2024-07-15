void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (sscanf(SRC_STRING, "%99s\0", data) == EOF)
            {
                printLine("sscanf failed!");
            }
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (sscanf(SRC_STRING, "%99s\0", data) == EOF)
            {
                printLine("sscanf failed!");
            }
        }
    }
}
