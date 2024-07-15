void FUN0()
{
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (scanf("%99s\0", data) == EOF)
        {
            printLine("scanf failed!");
        }
    }
}
