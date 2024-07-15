typedef union
{
    double * unionFirst;
    double * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_unionType;
void FUN0()
{
    double * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_unionType myUnion;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    myUnion.unionFirst = data;
    {
        double * data = myUnion.unionSecond;
        printDoubleLine(*data);
        free(data);
    }
}
