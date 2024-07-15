typedef struct _CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
<START>
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
