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
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(structType myStruct);
void FUN3()
{
    char * data;
    structType myStruct;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
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
    ; 
}
void FUN2(structType myStruct)
{
    char * data = myStruct.structFirst;
    delete data;
}
} 
