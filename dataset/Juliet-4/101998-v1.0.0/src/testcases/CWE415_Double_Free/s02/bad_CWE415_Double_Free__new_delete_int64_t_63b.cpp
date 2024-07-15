namespace NAMESPACE0
{
void FUN0(int64_t * * dataPtr);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    delete data;
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
<START>
    delete data;
<END>
}
} 
