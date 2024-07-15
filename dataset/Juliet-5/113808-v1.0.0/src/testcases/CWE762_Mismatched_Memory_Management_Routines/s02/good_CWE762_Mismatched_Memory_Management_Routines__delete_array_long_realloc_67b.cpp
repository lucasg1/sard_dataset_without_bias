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
void FUN2(structType myStruct);
void FUN3()
{
    long * data;
    structType myStruct;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    myStruct.structFirst = data;
    FUN2(myStruct);
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
    delete [] data;
}
void FUN2(structType myStruct)
{
    long * data = myStruct.structFirst;
    free(data);
}
} 
