namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    {
        static long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
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
void FUN2(long * data)
{
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
