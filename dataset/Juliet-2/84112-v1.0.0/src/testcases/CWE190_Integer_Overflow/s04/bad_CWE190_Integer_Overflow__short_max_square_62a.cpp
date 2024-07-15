namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = SHRT_MAX;
}
} 
namespace NAMESPACE0
{
void FUN0(short &data);
void FUN2()
{
    short data;
    data = 0;
    FUN0(data);
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
} 
