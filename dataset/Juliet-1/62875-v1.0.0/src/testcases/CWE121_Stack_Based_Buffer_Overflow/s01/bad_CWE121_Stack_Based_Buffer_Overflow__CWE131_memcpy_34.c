typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_34_unionType;
void FUN0()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_34_unionType myUnion;
    data = NULL;
    data = (int *)ALLOCA(10);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
<START>
            memcpy(data, source, 10*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
