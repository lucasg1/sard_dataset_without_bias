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
    data = 5LL;
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
    data = 5LL;
    if(FUN0())
    {
        printLongLongLine(data);
    }
}
