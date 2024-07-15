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
    if(FUN0())
    {
        data = 5L;
    }
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
    if(FUN0())
    {
        data = 5L;
    }
    if(FUN0())
    {
        printLongLine(data);
    }
}
void FUN4()
{
    long data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
    if(FUN0())
    {
        data = 10L;
        printLongLine(data);
    }
}
void FUN5()
{
    long data;
    if(FUN0())
    {
        data = 5L;
        printLongLine(data);
    }
    if(FUN0())
    {
        data = 10L;
        printLongLine(data);
    }
}
