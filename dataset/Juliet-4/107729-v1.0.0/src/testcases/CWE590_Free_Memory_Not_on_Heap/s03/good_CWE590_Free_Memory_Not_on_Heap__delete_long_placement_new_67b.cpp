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
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
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
    long * structFirst;
} structType;
void FUN0(structType myStruct)
{
    long * data = myStruct.structFirst;
    printLongLine(*data);
    delete data;
}
} 
