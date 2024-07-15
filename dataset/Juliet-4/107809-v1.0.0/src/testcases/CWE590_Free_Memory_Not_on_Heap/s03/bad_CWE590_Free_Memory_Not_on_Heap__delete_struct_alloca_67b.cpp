namespace NAMESPACE0
{
typedef struct _structType
{
    twoIntsStruct * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    structType myStruct;
    data = NULL; 
    {
        twoIntsStruct * dataBuffer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
        dataBuffer->intOne = 1;
        dataBuffer->intTwo = 1;
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
    twoIntsStruct * structFirst;
} structType;
void FUN0(structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    printStructLine(data);
<START>
    delete data;
<END>
}
} 
