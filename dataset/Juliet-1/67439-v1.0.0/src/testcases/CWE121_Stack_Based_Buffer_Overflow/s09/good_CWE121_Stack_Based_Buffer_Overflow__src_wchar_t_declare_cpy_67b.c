typedef struct _CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType myStruct;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__src_wchar_t_declare_cpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[50] = L"";
        wcscpy(dest, data);
        printWLine(data);
    }
}
