typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE415_Double_Free__malloc_free_long_34_unionType;
void FUN0()
{
    long * data;
    CWE415_Double_Free__malloc_free_long_34_unionType myUnion;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    long * data;
    CWE415_Double_Free__malloc_free_long_34_unionType myUnion;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        ; 
    }
}
