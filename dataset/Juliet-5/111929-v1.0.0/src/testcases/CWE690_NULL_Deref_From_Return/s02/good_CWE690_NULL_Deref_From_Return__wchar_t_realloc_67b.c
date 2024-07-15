typedef struct _CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType
{
    wchar_t * structFirst;
} CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType myStruct;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType
{
    wchar_t * structFirst;
} CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__wchar_t_realloc_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}
