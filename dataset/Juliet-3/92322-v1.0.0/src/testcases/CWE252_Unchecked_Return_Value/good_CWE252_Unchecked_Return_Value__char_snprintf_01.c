void FUN0()
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
