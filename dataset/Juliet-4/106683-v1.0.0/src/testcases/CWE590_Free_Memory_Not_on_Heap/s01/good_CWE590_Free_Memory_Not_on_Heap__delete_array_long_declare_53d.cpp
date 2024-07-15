namespace NAMESPACE0
{
void FUN0(long * data);
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
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(long * data);
void FUN0(long * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data);
void FUN3(long * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data)
{
    printLongLine(data[0]);
    delete [] data;
}
} 
