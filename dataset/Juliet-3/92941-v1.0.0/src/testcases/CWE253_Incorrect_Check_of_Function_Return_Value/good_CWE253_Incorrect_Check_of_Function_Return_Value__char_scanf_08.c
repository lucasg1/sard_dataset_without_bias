static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
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
