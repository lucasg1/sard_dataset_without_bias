namespace NAMESPACE0
{
void FUN0(long &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(long &data);
void FUN2()
{
    long data;
    FUN0(data);
<START>
    printLongLine(data);
<END>
}
} 
