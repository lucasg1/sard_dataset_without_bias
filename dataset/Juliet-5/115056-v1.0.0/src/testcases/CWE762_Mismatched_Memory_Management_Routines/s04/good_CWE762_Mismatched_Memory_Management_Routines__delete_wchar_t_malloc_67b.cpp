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
    data = new wchar_t;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    wchar_t * data;
    structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    myStruct.structFirst = data;
    FUN2(myStruct);
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
    delete data;
}
void FUN2(structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    free(data);
}
} 
