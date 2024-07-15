namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL; 
    {
        static int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
