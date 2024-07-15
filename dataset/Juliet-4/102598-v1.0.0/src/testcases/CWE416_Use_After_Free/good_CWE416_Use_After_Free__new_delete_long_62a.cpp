namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = new long;
    *data = 5L;
}
void FUN1(long * &data)
{
    data = new long;
    *data = 5L;
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(long * &data);
void FUN3()
{
    long * data;
    data = NULL;
    FUN0(data);
    printLongLine(*data);
}
void FUN1(long * &data);
void FUN5()
{
    long * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
