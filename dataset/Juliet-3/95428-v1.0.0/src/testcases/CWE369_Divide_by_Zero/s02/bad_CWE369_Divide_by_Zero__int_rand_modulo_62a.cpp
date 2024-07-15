namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = RAND32();
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN2()
{
    int data;
    data = -1;
    FUN0(data);
<START>
    printIntLine(100 % data);
<END>
}
} 
