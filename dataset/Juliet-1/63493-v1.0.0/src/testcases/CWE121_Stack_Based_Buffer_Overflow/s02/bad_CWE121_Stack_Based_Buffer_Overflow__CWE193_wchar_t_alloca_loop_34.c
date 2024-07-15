typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_loop_34_unionType myUnion;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = dataBadBuffer;
    data[0] = L'\0'; 
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
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
}
