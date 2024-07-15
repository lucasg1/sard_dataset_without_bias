typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
<START>
        printLongLongLine(*data);
<END>
        free(data);
    }
}
