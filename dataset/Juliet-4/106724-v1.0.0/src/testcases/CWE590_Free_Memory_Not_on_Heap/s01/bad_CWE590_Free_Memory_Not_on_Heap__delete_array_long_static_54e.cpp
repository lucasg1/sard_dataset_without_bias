namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(long * data);
void FUN0(long * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN2(long * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN1(long * data);
void FUN7()
{
    long * data;
    data = NULL; 
    {
        static long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data)
{
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
