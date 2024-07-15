namespace NAMESPACE0
{
void FUN0(int &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN2()
{
    int data;
    FUN0(data);
<START>
    printIntLine(data);
<END>
}
} 
