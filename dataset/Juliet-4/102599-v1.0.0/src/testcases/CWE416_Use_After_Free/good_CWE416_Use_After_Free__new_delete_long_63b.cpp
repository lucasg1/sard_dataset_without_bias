namespace NAMESPACE0
{
void FUN0(long * * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    FUN0(&data);
}
void FUN2(long * * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    delete data;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(long * * dataPtr)
{
    long * data = *dataPtr;
    printLongLine(*data);
}
void FUN2(long * * dataPtr)
{
    long * data = *dataPtr;
    ; 
}
} 
