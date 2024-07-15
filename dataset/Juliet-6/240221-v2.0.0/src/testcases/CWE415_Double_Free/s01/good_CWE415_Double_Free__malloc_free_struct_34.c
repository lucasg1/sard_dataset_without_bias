typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE415_Double_Free__malloc_free_struct_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    CWE415_Double_Free__malloc_free_struct_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        ; 
    }
}
