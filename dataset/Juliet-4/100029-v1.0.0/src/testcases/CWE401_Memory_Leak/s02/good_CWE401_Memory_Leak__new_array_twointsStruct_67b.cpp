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
    twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    twoIntsStruct * data;
    structType myStruct;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
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
    delete[] data;
}
} 
