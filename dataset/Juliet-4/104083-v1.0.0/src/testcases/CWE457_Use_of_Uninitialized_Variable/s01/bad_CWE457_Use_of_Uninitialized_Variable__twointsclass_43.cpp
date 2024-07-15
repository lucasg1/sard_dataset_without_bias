namespace NAMESPACE0
{
void FUN0(TwoIntsClass &data)
{
    ; 
}
void FUN1()
{
    TwoIntsClass data;
    FUN0(data);
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
} 
