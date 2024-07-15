typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType myStruct;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_ncpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[10+1] = SRC_STRING;
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
    }
}
