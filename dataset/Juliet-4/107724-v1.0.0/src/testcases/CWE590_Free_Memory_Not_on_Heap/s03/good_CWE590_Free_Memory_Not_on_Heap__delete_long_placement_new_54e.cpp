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
void FUN3()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data);
void FUN2(long * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN1(long * data);
void FUN5(long * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * data)
{
    printLongLine(*data);
    delete data;
}
} 
