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
        char buffer[sizeof(TwoIntsClass)];
        TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
