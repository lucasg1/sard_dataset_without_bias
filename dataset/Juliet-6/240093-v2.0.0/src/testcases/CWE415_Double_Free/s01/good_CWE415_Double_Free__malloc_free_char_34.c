typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE415_Double_Free__malloc_free_char_34_unionType;
void FUN0()
{
    char * data;
    CWE415_Double_Free__malloc_free_char_34_unionType myUnion;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    char * data;
    CWE415_Double_Free__malloc_free_char_34_unionType myUnion;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        ; 
    }
}
