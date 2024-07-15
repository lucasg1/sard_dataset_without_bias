typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType myStruct;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBadBuffer;
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_loop_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
