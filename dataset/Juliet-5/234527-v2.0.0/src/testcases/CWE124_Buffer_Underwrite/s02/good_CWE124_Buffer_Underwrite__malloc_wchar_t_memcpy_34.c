typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE124_Buffer_Underwrite__malloc_wchar_t_memcpy_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE124_Buffer_Underwrite__malloc_wchar_t_memcpy_34_unionType myUnion;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (dataBuffer == NULL) {exit(-1);}
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
            memcpy(data, source, 100*sizeof(wchar_t));
            data[100-1] = L'\0';
            printWLine(data);
        }
    }
}
