typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_loop_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
            size_t i, sourceLen;
            sourceLen = wcslen(source);
            for (i = 0; i < sourceLen + 1; i++)
            {
                data[i] = source[i];
            }
            printWLine(data);
            free(data);
        }
    }
}
