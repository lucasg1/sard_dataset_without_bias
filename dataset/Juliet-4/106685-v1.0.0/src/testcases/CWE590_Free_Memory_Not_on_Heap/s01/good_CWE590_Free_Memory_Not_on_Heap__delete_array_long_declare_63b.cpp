namespace NAMESPACE0
{
void FUN0(long * * data);
void FUN1()
{
    long * data;
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
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(data[0]);
    delete [] data;
}
} 
