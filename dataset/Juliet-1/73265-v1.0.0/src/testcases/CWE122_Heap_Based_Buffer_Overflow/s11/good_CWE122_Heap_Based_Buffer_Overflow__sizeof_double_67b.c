typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType
{
    double * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType myStruct);
void FUN1()
{
    double * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType myStruct;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    *data = 1.7E300;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType
{
    double * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType myStruct)
{
    double * data = myStruct.structFirst;
    printDoubleLine(*data);
    free(data);
}
