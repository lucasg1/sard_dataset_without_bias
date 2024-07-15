typedef struct _CWE401_Memory_Leak__int_malloc_67_structType
{
    int * structFirst;
} CWE401_Memory_Leak__int_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__int_malloc_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE401_Memory_Leak__int_malloc_67_structType myStruct;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__int_malloc_67_structType
{
    int * structFirst;
} CWE401_Memory_Leak__int_malloc_67_structType;
void FUN0(CWE401_Memory_Leak__int_malloc_67_structType myStruct)
{
    int * data = myStruct.structFirst;
<START>
<END>
    ; 
}
