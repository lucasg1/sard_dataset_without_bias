namespace NAMESPACE0
{
void FUN0(int64_t * * data);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t * dataBuffer = new int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    printLongLongLine(*data);
    delete data;
}
} 
