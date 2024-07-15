namespace NAMESPACE0
{
void FUN0(double &data)
{
    data = 5.0;
}
void FUN1(double &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(double &data);
void FUN3()
{
    double data;
    FUN0(data);
    printDoubleLine(data);
}
void FUN1(double &data);
void FUN5()
{
    double data;
    FUN1(data);
    data = 5.0;
    printDoubleLine(data);
}
} 
