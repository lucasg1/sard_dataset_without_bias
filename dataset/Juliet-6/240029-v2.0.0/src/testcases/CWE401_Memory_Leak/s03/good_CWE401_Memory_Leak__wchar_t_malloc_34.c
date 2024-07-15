typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE401_Memory_Leak__wchar_t_malloc_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE401_Memory_Leak__wchar_t_malloc_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    CWE401_Memory_Leak__wchar_t_malloc_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        free(data);
    }
}
