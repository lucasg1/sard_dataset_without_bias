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
    if(FUN0())
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
