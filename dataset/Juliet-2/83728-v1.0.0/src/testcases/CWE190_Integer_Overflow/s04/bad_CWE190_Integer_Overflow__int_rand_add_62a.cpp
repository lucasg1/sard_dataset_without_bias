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
    data = 0;
    FUN0(data);
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
} 
