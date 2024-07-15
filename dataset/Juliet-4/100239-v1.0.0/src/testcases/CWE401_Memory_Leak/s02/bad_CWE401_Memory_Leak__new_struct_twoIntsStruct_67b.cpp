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
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    myStruct.structFirst = data;
    FUN0(myStruct);
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
<START>
<END>
    ; 
}
} 
