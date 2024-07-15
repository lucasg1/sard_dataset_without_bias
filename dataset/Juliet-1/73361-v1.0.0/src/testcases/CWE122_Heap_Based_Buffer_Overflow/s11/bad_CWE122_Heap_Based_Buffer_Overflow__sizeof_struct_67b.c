typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType
{
    twoIntsStruct * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
<START>
    printStructLine(data);
<END>
    free(data);
}
