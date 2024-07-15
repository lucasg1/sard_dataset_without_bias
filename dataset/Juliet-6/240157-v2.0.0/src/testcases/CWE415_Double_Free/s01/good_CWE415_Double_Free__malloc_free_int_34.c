typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE415_Double_Free__malloc_free_int_34_unionType;
void FUN0()
{
    int * data;
    CWE415_Double_Free__malloc_free_int_34_unionType myUnion;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    int * data;
    CWE415_Double_Free__malloc_free_int_34_unionType myUnion;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        ; 
    }
}
