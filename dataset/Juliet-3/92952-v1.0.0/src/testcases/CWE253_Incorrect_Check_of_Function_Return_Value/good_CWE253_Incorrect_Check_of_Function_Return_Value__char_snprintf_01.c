void FUN0()
{
    {
        char dataBuffer[100] = "";
        char * data = dataBuffer;
        if (SNPRINTF(data,100-strlen(SRC_STRING)-1, "%s\n", SRC_STRING) < 0)
        {
            printLine("snprintf failed!");
        }
    }
}
