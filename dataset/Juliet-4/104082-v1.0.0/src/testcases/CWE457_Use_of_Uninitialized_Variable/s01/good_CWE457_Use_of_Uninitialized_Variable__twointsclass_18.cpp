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
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN1()
{
    TwoIntsClass data;
    goto source;
source:
    data.intOne = 1;
    data.intTwo = 2;
    goto sink;
sink:
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
