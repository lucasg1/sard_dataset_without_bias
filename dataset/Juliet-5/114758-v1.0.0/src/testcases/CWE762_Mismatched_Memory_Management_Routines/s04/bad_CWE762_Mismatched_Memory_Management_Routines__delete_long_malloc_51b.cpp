namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete data;
<END>
}
} 
