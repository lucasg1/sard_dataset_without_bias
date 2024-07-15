namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = 2;
}
void FUN1(int64_t &data)
{
    data = LLONG_MAX;
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
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN1(int64_t &data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    FUN1(data);
    if(data > 0) 
    {
        if (data < (LLONG_MAX/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 