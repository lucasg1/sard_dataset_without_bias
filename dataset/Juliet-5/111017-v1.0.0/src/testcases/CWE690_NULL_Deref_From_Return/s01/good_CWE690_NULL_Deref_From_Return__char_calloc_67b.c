typedef struct _CWE690_NULL_Deref_From_Return__char_calloc_67_structType
{
    char * structFirst;
} CWE690_NULL_Deref_From_Return__char_calloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__char_calloc_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE690_NULL_Deref_From_Return__char_calloc_67_structType myStruct;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE690_NULL_Deref_From_Return__char_calloc_67_structType
{
    char * structFirst;
} CWE690_NULL_Deref_From_Return__char_calloc_67_structType;
void FUN0(CWE690_NULL_Deref_From_Return__char_calloc_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
