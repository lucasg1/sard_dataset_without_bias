namespace NAMESPACE0
{
void FUN0(double &data)
{
    data = 5.0;
}
void FUN1()
{
    double data;
    FUN0(data);
    printDoubleLine(data);
}
void FUN2(double &data)
{
    ; 
}
void FUN3()
{
    double data;
    FUN2(data);
    data = 5.0;
    printDoubleLine(data);
}
} 
