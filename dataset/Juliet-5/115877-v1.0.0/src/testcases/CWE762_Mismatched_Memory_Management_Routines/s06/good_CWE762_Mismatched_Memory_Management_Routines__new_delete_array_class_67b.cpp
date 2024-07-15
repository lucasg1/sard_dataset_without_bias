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
    data = new TwoIntsClass[100];
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
    delete [] data;
}
void FUN2(structType myStruct)
{
    TwoIntsClass * data = myStruct.structFirst;
    delete data;
}
} 
