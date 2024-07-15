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
        TwoIntsClass * dataBuffer = new TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
extern TwoIntsClass * VAR0;
extern TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    TwoIntsClass * data = VAR1;
    printIntLine(data->intOne);
    delete data;
}
} 
