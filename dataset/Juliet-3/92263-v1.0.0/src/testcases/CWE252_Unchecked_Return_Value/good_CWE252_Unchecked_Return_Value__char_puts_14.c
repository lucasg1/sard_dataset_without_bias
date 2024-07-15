void FUN0()
{
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
