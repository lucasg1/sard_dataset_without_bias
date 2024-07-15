typedef struct _CWE690_NULL_Deref_From_Return__fopen_67_structType
{
    FILE * structFirst;
} CWE690_NULL_Deref_From_Return__fopen_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__fopen_67_structType myStruct);
void FUN1()
{
    FILE * data;
    CWE690_NULL_Deref_From_Return__fopen_67_structType myStruct;
    data = NULL;
    data = fopen("file.txt", "w+");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__fopen_67_structType
{
    FILE * structFirst;
} CWE690_NULL_Deref_From_Return__fopen_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__fopen_67_structType myStruct)
{
    FILE * data = myStruct.structFirst;
<START>
    fclose(data);
<END>
}
