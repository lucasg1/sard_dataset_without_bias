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
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    TwoIntsClass * data;
    structType myStruct;
    data = NULL;
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
    printIntLine(data->intOne);
    delete data;
}
void FUN2(structType myStruct)
{
    TwoIntsClass * data = myStruct.structFirst;
    if (data != NULL)
    {
        printIntLine(data->intOne);
        delete data;
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
