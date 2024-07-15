namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    char * data;
    structType myStruct;
    data = NULL;
    data = new char;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    char * data;
    structType myStruct;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    myStruct.structFirst = data;
    FUN2(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    char * structFirst;
} structType;
void FUN0(structType myStruct)
{
    char * data = myStruct.structFirst;
    delete data;
}
void FUN2(structType myStruct)
{
    char * data = myStruct.structFirst;
    free(data);
}
} 
