void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            if (scanf("%99s\0", data) == 0)
<END>
            {
                printLine("scanf failed!");
            }
        }
    }
    else
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
}
