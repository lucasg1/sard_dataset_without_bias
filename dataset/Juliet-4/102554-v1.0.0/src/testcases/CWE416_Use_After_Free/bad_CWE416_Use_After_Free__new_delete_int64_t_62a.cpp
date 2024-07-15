namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t;
    *data = 5LL;
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * &data);
void FUN2()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
<START>
    printLongLongLine(*data);
<END>
}
} 
