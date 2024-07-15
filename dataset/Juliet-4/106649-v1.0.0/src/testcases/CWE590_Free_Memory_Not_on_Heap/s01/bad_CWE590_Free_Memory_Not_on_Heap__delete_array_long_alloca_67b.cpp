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
        long * dataBuffer = (long *)ALLOCA(100*sizeof(long));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
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
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
