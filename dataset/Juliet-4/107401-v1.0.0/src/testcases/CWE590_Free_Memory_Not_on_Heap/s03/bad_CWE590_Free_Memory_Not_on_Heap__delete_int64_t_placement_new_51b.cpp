namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        char buffer[sizeof(int64_t)];
        int64_t * dataBuffer = new(buffer) int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
