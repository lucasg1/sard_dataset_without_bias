typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_34_unionType;
void FUN0()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_34_unionType myUnion;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR0;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
