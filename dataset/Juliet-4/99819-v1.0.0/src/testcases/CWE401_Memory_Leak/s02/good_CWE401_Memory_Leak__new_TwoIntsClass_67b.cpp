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
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    TwoIntsClass * data;
    structType myStruct;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    myStruct.structFirst = data;
    FUN2(myStruct);
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
    ; 
}
void FUN2(structType myStruct)
{
    TwoIntsClass * data = myStruct.structFirst;
    delete data;
}
} 
