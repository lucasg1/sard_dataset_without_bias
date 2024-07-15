namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    goto source;
source:
    ; 
    goto sink;
sink:
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
} 
