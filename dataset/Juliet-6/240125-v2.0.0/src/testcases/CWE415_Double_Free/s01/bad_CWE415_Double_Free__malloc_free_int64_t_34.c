typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE415_Double_Free__malloc_free_int64_t_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE415_Double_Free__malloc_free_int64_t_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
<START>
        free(data);
<END>
    }
}
