typedef struct _CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType myStruct;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_alloca_cat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
