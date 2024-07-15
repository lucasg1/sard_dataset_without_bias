namespace NAMESPACE0
{
void FUN0(TwoIntsClass &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass &data);
void FUN2()
{
    TwoIntsClass data;
    FUN0(data);
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
} 
