void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC);
<END>
        }
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (SNPRINTF(data,100-strlen(SRC)-1, "%s\n", SRC) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}
