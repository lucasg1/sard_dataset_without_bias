void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
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
