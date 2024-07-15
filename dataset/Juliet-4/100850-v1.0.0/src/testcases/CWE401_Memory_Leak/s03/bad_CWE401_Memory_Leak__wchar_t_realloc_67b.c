typedef struct _CWE401_Memory_Leak__wchar_t_realloc_67_structType
{
    wchar_t * structFirst;
} CWE401_Memory_Leak__wchar_t_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__wchar_t_realloc_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE401_Memory_Leak__wchar_t_realloc_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE401_Memory_Leak__wchar_t_realloc_67_structType
{
    wchar_t * structFirst;
} CWE401_Memory_Leak__wchar_t_realloc_67_structType;
void FUN0(CWE401_Memory_Leak__wchar_t_realloc_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
<END>
    ; 
}
