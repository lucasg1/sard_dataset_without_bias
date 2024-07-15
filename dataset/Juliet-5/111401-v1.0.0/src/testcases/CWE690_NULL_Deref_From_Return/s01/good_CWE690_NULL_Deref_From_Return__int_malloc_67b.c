typedef struct _CWE690_NULL_Deref_From_Return__int_malloc_67_structType
{
    int * structFirst;
} CWE690_NULL_Deref_From_Return__int_malloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__int_malloc_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE690_NULL_Deref_From_Return__int_malloc_67_structType myStruct;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__int_malloc_67_structType
{
    int * structFirst;
} CWE690_NULL_Deref_From_Return__int_malloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__int_malloc_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
