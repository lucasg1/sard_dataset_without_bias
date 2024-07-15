namespace NAMESPACE0
{
void FUN0(long &data)
{
    data = 5L;
}
void FUN1(long &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(long &data);
void FUN3()
{
    long data;
    FUN0(data);
    printLongLine(data);
}
void FUN1(long &data);
void FUN5()
{
    long data;
    FUN1(data);
    data = 5L;
    printLongLine(data);
}
} 
