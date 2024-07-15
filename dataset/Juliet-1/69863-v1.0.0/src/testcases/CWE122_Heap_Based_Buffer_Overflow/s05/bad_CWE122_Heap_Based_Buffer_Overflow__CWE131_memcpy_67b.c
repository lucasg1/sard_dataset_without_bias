typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct;
    data = NULL;
    data = (int *)malloc(10);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
