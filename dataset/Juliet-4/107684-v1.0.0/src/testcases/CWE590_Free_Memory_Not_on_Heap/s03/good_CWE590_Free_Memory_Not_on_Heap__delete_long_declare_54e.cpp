namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
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
void FUN6(long * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN6(long * data);
void FUN3(long * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data)
{
    printLongLine(*data);
    delete data;
}
} 
