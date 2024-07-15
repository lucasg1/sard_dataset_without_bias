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
    if(FUN0())
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}
