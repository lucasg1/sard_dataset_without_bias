typedef struct _CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType
{
    int64_t * structFirst;
} CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType myStruct;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType
{
    int64_t * structFirst;
} CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    if (data != NULL)
    {
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
