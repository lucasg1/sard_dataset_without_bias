namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass * dataBuffer = (TwoIntsClass *)ALLOCA(sizeof(TwoIntsClass));
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
