typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType
{
    int structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType myStruct);
void FUN1()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType myStruct;
    data = -1;
    data = 10;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType
{
    int structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE129_large_67_structType myStruct)
{
    int data = myStruct.structFirst;
    {
        int i;
        int buffer[10] = { 0 };
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
    }
}
