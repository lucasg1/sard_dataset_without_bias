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
    {
        int64_t * dataBuffer = new int64_t[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
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
    int64_t * structFirst;
} structType;
void FUN0(structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    printLongLongLine(data[0]);
    delete [] data;
}
} 
