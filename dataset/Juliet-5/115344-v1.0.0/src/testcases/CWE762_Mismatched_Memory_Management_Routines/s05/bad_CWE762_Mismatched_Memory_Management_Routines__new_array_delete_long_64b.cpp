namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
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
    delete data;
<END>
}
} 
