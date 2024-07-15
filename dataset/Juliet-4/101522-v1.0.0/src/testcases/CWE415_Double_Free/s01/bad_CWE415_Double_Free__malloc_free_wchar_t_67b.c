typedef struct _CWE415_Double_Free__malloc_free_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE415_Double_Free__malloc_free_wchar_t_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_wchar_t_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE415_Double_Free__malloc_free_wchar_t_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE415_Double_Free__malloc_free_wchar_t_67_structType
{
    wchar_t * structFirst;
} CWE415_Double_Free__malloc_free_wchar_t_67_structType;
void FUN0(CWE415_Double_Free__malloc_free_wchar_t_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    free(data);
<END>
}
