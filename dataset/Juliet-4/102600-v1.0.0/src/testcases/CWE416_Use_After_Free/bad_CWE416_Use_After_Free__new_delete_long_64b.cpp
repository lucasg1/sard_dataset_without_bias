namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    delete data;
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
    printLongLine(*data);
<END>
}
} 
