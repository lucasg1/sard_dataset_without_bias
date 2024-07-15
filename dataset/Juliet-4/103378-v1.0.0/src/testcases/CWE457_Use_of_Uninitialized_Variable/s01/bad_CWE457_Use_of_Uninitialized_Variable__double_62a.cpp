namespace NAMESPACE0
{
void FUN0(double &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(double &data);
void FUN2()
{
    double data;
    FUN0(data);
<START>
    printDoubleLine(data);
<END>
}
} 
