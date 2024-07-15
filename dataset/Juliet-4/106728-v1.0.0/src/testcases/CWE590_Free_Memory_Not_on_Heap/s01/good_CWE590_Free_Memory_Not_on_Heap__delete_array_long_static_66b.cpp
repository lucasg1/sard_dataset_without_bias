namespace NAMESPACE0
{
void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL; 
    {
        long * dataBuffer = new long[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
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
    printLongLine(data[0]);
    delete [] data;
}
} 
