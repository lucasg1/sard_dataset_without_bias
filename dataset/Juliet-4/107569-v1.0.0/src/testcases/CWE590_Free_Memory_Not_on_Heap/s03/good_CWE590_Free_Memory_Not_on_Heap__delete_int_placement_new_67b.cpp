namespace NAMESPACE0
{
typedef struct _structType
{
    int * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    int * data;
    structType myStruct;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    int * structFirst;
} structType;
void FUN0(structType myStruct)
{
    int * data = myStruct.structFirst;
    printIntLine(*data);
    delete data;
}
} 
