namespace NAMESPACE0
{
typedef struct _structType
{
    int * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    int * data;
    structType myStruct;
    data = NULL;
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    int * data;
    structType myStruct;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    int * structFirst;
} structType;
void FUN0(structType myStruct)
{
    int * data = myStruct.structFirst;
    ; 
}
void FUN2(structType myStruct)
{
    int * data = myStruct.structFirst;
    delete data;
}
} 
