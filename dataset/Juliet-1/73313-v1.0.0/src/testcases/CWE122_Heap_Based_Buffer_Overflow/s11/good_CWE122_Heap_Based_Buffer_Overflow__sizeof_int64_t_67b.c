typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType
{
    int64_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType myStruct;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    *data = 2147483643LL;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType
{
    int64_t * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    printLongLongLine(*data);
    free(data);
}
