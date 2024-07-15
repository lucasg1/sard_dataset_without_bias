typedef struct _CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType myStruct;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    data = dataBadBuffer;
    data[0] = L'\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__dest_wchar_t_declare_cat_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcscat(data, source);
<END>
        printWLine(data);
    }
}
