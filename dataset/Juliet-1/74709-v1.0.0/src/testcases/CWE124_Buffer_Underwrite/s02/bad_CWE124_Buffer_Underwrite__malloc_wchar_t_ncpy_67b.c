typedef struct _CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType
{
    wchar_t * structFirst;
} CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType;
void FUN0(CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType myStruct;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType
{
    wchar_t * structFirst;
} CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType;
void FUN0(CWE124_Buffer_Underwrite__malloc_wchar_t_ncpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0';
        printWLine(data);
    }
}
