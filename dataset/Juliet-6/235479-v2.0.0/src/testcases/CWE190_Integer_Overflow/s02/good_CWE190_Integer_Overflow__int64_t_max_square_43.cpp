namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = 2;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
void FUN2(int64_t &data)
{
    data = LLONG_MAX;
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    FUN2(data);
    if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
