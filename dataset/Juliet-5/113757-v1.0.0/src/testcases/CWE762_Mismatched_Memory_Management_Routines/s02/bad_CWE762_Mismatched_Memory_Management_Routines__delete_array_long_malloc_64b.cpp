namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
<START>
    delete [] data;
<END>
}
} 
