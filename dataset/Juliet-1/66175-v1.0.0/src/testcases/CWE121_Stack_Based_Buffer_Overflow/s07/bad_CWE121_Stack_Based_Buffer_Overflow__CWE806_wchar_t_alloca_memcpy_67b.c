typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType myStruct;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_memcpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
<START>
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
