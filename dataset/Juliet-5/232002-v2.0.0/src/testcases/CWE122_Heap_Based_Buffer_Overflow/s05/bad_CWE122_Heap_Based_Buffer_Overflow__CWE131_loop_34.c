typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_34_unionType;
void FUN0()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_34_unionType myUnion;
    data = NULL;
    data = (int *)malloc(10);
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            size_t i;
            for (i = 0; i < 10; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
