namespace NAMESPACE0
{
long * FUN0(long * data)
{
    data = new long[100];
    return data;
}
} 
namespace NAMESPACE0
{
long * FUN0(long * data);
void FUN2()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 
