typedef struct _CWE401_Memory_Leak__strdup_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE401_Memory_Leak__strdup_wchar_t_67_structType;
void FUN0(CWE401_Memory_Leak__strdup_wchar_t_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE401_Memory_Leak__strdup_wchar_t_67_structType myStruct;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__strdup_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE401_Memory_Leak__strdup_wchar_t_67_structType;
void FUN0(CWE401_Memory_Leak__strdup_wchar_t_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
<END>
    ; 
}
