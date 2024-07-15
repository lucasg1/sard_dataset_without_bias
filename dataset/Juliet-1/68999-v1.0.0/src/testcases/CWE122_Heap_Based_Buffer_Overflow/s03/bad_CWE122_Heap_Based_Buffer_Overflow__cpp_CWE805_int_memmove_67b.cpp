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
    data = new int[50];
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
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
