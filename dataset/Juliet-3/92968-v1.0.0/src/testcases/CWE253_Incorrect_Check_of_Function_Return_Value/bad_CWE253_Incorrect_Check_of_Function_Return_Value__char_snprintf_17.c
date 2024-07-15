void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
<START>
            if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) == 0)
<END>
            {
                printLine("snprintf failed!");
            }
        }
    }
}
