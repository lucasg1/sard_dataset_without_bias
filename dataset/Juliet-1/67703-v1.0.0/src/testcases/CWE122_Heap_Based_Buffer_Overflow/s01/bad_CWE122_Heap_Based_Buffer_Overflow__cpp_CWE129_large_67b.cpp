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
    data = 10;
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
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}
} 
