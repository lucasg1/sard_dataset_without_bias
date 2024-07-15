namespace NAMESPACE0
{
void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
    printLongLine(*data);
    delete data;
}
} 
