void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
void FUN1()
{
    if(globalFive==5)
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
