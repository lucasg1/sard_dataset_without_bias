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
void FUN1(long * data);
void FUN3()
{
    long * data;
    data = NULL; 
    {
        long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
