typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE401_Memory_Leak__wchar_t_realloc_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE401_Memory_Leak__wchar_t_realloc_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
