namespace NAMESPACE0
{
typedef struct _structType
{
    void * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    void * data;
    structType myStruct;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    void * structFirst;
} structType;
void FUN0(structType myStruct)
{
    void * data = myStruct.structFirst;
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
