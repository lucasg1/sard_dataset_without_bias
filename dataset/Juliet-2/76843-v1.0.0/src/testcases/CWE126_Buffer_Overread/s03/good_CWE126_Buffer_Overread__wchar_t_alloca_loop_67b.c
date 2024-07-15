typedef struct _CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType;
void FUN0(CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType myStruct;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBadBuffer, L'A', 50-1); 
    dataBadBuffer[50-1] = L'\0'; 
    wmemset(dataGoodBuffer, L'A', 100-1); 
    dataGoodBuffer[100-1] = L'\0'; 
    data = dataGoodBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType
{
    wchar_t * structFirst;
} CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType;
void FUN0(CWE126_Buffer_Overread__wchar_t_alloca_loop_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
