typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct;
    data = NULL;
    data = (int *)ALLOCA(10);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
