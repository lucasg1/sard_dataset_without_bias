namespace NAMESPACE0
{
typedef struct _structType
{
    int structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    int data;
    structType myStruct;
    data = -1;
    data = 20;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    int structFirst;
} structType;
void FUN0(structType myStruct)
{
    int data = myStruct.structFirst;
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
}
} 
