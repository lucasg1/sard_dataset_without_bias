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
        data = LLONG_MAX;
    }
    if(FUN0())
    {
        {
<START>
            data++;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
