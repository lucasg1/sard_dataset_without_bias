namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(sizeof(long));
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    long * * dataPtr = (long * *)dataVoidPtr;
    long * data = (*dataPtr);
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
