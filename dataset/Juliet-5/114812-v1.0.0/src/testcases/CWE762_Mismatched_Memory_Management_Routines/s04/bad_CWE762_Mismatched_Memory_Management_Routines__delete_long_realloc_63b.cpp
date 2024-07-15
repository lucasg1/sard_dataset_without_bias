namespace NAMESPACE0
{
void FUN0(long * * dataPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
<START>
    delete data;
<END>
}
} 
