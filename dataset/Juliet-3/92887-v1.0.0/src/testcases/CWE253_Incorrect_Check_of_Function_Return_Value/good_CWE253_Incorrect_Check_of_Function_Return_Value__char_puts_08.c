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
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
