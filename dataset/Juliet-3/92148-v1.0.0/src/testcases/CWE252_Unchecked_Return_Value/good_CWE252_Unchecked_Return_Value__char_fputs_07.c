static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
