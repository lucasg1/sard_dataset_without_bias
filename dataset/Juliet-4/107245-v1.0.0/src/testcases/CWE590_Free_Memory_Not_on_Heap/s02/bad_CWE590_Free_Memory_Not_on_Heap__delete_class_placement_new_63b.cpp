namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr);
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
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr)
{
    TwoIntsClass * data = *dataPtr;
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
