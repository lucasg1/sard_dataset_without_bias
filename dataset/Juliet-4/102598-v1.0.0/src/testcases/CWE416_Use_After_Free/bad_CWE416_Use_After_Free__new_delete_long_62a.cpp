namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long;
    *data = 5L;
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(long * &data);
void FUN2()
{
    long * data;
    data = NULL;
    FUN0(data);
<START>
    printLongLine(*data);
<END>
}
} 
