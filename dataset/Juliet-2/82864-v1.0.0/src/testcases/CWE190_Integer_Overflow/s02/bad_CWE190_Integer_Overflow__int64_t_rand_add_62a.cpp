namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = (int64_t)RAND64();
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
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}
} 