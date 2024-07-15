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
    int64_t data;
    if(FUN0())
    {
        data = 5LL;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLongLongLine(data);
    }
}
void FUN3()
{
    int64_t data;
    if(FUN0())
    {
        data = 5LL;
    }
    if(FUN0())
    {
        printLongLongLine(data);
    }
}
void FUN4()
{
    int64_t data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5LL;
        printLongLongLine(data);
    }
    if(FUN0())
    {
        data = 10LL;
        printLongLongLine(data);
    }
}
void FUN5()
{
    int64_t data;
    if(FUN0())
    {
        data = 5LL;
        printLongLongLine(data);
    }
    if(FUN0())
    {
        data = 10LL;
        printLongLongLine(data);
    }
}
