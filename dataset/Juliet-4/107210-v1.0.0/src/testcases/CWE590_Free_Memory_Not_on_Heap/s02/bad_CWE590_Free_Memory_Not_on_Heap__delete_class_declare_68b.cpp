TwoIntsClass * VAR0;
TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0();
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
    VAR0 = data;
    FUN0();
}
} 
extern TwoIntsClass * VAR0;
extern TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    TwoIntsClass * data = VAR0;
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
