typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType myStruct;
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType
{
    int * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
        free(data);
    }
}
