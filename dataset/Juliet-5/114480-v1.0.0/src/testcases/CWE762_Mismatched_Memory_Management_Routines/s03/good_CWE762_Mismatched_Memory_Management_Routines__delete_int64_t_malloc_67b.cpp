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
    data = new int64_t;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    int64_t * data;
    structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    myStruct.structFirst = data;
    FUN2(myStruct);
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
    delete data;
}
void FUN2(structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    free(data);
}
} 
