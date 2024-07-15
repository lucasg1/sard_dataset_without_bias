namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = LLONG_MAX;
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t &data);
void FUN2()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
} 
