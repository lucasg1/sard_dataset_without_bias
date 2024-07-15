typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE415_Double_Free__malloc_free_wchar_t_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE415_Double_Free__malloc_free_wchar_t_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    CWE415_Double_Free__malloc_free_wchar_t_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        ; 
    }
}
