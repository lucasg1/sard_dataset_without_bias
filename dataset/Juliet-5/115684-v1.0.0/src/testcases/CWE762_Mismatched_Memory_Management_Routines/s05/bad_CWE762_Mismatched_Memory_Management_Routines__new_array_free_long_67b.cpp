namespace NAMESPACE0
{
typedef struct _structType
{
    long * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    long * data;
    structType myStruct;
    data = NULL;
    data = new long[100];
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    long * structFirst;
} structType;
void FUN0(structType myStruct)
{
    long * data = myStruct.structFirst;
<START>
    free(data);
<END>
}
} 
