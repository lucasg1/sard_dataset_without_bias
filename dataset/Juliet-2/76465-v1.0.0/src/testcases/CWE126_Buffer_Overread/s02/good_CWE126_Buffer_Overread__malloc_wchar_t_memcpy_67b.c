typedef struct _CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType myStruct;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
