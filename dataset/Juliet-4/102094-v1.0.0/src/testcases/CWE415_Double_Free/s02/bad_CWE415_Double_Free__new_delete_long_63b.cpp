namespace NAMESPACE0
{
void FUN0(long * * dataPtr);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    delete data;
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
