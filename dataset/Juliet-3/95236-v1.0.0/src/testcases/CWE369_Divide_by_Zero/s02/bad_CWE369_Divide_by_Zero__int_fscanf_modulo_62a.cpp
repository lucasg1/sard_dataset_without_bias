namespace NAMESPACE0
{
void FUN0(int &data)
{
    fscanf(stdin, "%d", &data);
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
