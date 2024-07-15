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
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            int VAR0 = 0;
            printIntLine(VAR0);
            VAR0 = 5;
            printIntLine(VAR0);
        }
    }
}
