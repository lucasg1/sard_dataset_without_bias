typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
<START>
            memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
            dest[100-1] = L'\0';
            printWLine(dest);
            free(data);
        }
    }
}
