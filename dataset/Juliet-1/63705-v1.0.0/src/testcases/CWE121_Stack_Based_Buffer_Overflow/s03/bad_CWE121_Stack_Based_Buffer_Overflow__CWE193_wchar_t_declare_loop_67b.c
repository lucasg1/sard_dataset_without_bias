typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType myStruct;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    data = dataBadBuffer;
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printWLine(data);
    }
}
