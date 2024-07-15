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
    twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    twoIntsStruct * data;
    structType myStruct;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    myStruct.structFirst = data;
    FUN2(myStruct);
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
    ; 
}
void FUN2(structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    delete data;
}
} 
