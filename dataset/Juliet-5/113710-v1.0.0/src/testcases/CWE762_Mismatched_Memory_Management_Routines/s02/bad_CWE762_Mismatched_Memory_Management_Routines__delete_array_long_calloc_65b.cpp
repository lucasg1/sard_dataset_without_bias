namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
<START>
    delete [] data;
<END>
}
} 
