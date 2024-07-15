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
        printLine("Not in path");
    }
}
void FUN3()
{
    if(FUN0())
    {
        printLine("Not in path");
    }
}
