namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        char buffer[sizeof(twoIntsStruct)];
        twoIntsStruct * dataBuffer = new(buffer) twoIntsStruct;
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
