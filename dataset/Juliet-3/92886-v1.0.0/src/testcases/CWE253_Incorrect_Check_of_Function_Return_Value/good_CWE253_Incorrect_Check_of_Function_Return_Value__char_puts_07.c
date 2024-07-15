static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
