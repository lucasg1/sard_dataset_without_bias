namespace NAMESPACE0
{
typedef struct _structType
{
    struct _twoIntsStruct * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    struct _twoIntsStruct * data;
    structType myStruct;
    data = NULL;
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    struct _twoIntsStruct * data;
    structType myStruct;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myStruct.structFirst = data;
    FUN2(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    struct _twoIntsStruct * structFirst;
} structType;
void FUN0(structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
    ; 
}
void FUN2(structType myStruct)
{
    struct _twoIntsStruct * data = myStruct.structFirst;
    delete[] data;
}
} 
