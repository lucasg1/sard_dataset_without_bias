typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_cpy_34_unionType myUnion;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
            wcscpy(data, source);
            printWLine(data);
        }
    }
}
