namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    wchar_t * data;
    structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    wchar_t * structFirst;
} structType;
void FUN0(structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    delete [] data;
<END>
}
} 
