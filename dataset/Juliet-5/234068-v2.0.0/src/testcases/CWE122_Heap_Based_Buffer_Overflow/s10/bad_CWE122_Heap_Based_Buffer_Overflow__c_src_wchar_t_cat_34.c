typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_34_unionType myUnion;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[50] = L"";
<START>
            wcscat(dest, data);
<END>
            printWLine(data);
            free(data);
        }
    }
}
