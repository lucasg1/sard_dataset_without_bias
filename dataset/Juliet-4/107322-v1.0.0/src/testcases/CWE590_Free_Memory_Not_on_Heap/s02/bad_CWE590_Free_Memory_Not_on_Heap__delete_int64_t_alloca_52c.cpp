namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t * dataBuffer = (int64_t *)ALLOCA(sizeof(int64_t));
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data);
void FUN0(int64_t * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int64_t * data)
{
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
