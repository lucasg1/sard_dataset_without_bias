namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
void FUN0()
{
    TwoIntsClass * data = VAR1;
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass dataBuffer;
        dataBuffer.intOne = 1;
        dataBuffer.intTwo = 1;
        data = &dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
