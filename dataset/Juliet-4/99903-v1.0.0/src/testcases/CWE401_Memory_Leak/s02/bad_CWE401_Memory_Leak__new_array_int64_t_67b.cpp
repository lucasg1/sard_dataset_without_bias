namespace NAMESPACE0
{
typedef struct _structType
{
    int64_t * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    int64_t * data;
    structType myStruct;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    int64_t * structFirst;
} structType;
void FUN0(structType myStruct)
{
    int64_t * data = myStruct.structFirst;
<START>
<END>
    ; 
}
} 
