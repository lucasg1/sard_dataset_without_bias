namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = 2;
}
void FUN1(int64_t &data)
{
    data = (int64_t)RAND64();
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t &data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    {
        int64_t result = data * data;
        printLongLongLine(result);
    }
}
void FUN1(int64_t &data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    FUN1(data);
    if (abs((long)data) <= (long)sqrt((double)LLONG_MAX))
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
