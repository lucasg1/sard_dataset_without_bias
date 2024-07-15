void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            sscanf(SRC, "%99s\0", data);
<END>
        }
    }
    else
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
}
