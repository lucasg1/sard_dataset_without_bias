namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    funcPtr(data);
}
} 
