namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = -2;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
void FUN2(int64_t &data)
{
    data = (int64_t)RAND64();
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    FUN2(data);
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
} 
