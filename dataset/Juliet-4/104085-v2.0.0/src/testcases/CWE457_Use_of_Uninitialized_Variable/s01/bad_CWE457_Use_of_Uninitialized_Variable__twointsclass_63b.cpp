namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataPtr);
void FUN1()
{
    TwoIntsClass data;
    ; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataPtr)
{
    TwoIntsClass data = *dataPtr;
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
} 
