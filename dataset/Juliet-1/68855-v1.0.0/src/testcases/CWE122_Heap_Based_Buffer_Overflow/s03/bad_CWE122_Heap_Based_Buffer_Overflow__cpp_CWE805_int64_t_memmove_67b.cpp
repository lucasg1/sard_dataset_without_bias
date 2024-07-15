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
    data = new int64_t[50];
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
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 
