namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    delete data;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
<START>
    printLongLongLine(*data);
<END>
}
} 
