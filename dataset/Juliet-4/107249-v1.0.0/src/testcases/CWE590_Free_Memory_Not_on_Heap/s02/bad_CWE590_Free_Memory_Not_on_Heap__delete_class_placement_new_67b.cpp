namespace NAMESPACE0
{
typedef struct _structType
{
    TwoIntsClass * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    TwoIntsClass * data;
    structType myStruct;
    data = NULL; 
    {
        char buffer[sizeof(TwoIntsClass)];
        TwoIntsClass * dataBuffer = new(buffer) TwoIntsClass;
        dataBuffer->intOne = 2;
        dataBuffer->intTwo = 2;
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    TwoIntsClass * structFirst;
} structType;
void FUN0(structType myStruct)
{
    TwoIntsClass * data = myStruct.structFirst;
    printIntLine(data->intOne);
<START>
    delete data;
<END>
}
} 
