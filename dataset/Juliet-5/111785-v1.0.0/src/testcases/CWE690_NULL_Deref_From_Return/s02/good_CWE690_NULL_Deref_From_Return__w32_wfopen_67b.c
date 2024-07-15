typedef struct _CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType
{
    FILE * structFirst;
} CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType myStruct;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType
{
    FILE * structFirst;
} CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__w32_wfopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
    if (data != NULL)
    {
        fclose(data);
    }
}
