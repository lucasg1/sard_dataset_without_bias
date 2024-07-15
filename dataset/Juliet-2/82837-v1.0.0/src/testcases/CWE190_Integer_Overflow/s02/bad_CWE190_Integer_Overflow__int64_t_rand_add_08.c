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
    data = 0LL;
    if(FUN0())
    {
        data = (int64_t)RAND64();
    }
    if(FUN0())
    {
        {
<START>
            int64_t result = data + 1;
<END>
            printLongLongLine(result);
        }
    }
}
