typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_unionType;
void FUN0()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_unionType myUnion;
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            memcpy(data, source, 10*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}
