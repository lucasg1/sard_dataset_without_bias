typedef struct _CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType
{
    wchar_t * structFirst;
} CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType;
void FUN0(CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType myStruct;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType
{
    wchar_t * structFirst;
} CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType;
void FUN0(CWE127_Buffer_Underread__wchar_t_declare_cpy_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t dest[100*2];
        wmemset(dest, L'C', 100*2-1); 
        dest[100*2-1] = L'\0'; 
<START>
        wcscpy(dest, data);
<END>
        printWLine(dest);
    }
}
