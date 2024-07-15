typedef struct _CWE690_NULL_Deref_From_Return__long_malloc_67_structType
{
    long * structFirst;
} CWE690_NULL_Deref_From_Return__long_malloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__long_malloc_67_structType myStruct);
void FUN1()
{
    long * data;
    CWE690_NULL_Deref_From_Return__long_malloc_67_structType myStruct;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__long_malloc_67_structType
{
    long * structFirst;
} CWE690_NULL_Deref_From_Return__long_malloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__long_malloc_67_structType myStruct)
{
    long * data = myStruct.structFirst;
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
