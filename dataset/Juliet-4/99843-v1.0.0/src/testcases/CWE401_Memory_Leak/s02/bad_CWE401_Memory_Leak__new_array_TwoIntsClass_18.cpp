namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    goto sink;
sink:
<START>
<END>
    ; 
}
} 
