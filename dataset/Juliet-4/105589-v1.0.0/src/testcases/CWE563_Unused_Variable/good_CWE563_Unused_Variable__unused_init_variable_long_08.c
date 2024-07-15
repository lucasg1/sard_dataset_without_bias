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
    long data;
    data = 5L;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLine(data);
    }
}
void FUN3()
{
    long data;
    data = 5L;
    if(FUN0())
    {
        printLongLine(data);
    }
}
