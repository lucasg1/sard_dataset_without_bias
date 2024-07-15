typedef struct _CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType myStruct;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType
{
    wchar_t * structFirst;
} CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_wchar_t_memmove_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        memmove(dest, data, 100*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
