namespace NAMESPACE0
{
void FUN0(long * * data);
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(*data);
    delete data;
}
} 
