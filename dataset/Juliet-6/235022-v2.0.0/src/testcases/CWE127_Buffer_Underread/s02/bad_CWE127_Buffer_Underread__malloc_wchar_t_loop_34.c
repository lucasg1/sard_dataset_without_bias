typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE127_Buffer_Underread__malloc_wchar_t_loop_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE127_Buffer_Underread__malloc_wchar_t_loop_34_unionType myUnion;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (dataBuffer == NULL) {exit(-1);}
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            size_t i;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); 
            dest[100-1] = L'\0'; 
            for (i = 0; i < 100; i++)
            {
<START>
                dest[i] = data[i];
<END>
            }
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
