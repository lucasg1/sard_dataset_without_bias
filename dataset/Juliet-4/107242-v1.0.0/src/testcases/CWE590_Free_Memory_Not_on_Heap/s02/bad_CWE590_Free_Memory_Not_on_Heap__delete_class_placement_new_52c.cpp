namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN3()
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
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
