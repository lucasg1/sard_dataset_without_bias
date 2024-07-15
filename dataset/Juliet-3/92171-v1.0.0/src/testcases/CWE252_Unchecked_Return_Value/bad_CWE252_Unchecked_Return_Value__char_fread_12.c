void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            fread((char *)data, sizeof(char), (size_t)(100-1), stdin);
<END>
        }
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fread((char *)data, sizeof(char), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}
