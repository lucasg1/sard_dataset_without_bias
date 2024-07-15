typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_34_unionType;
void FUN0()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_34_unionType myUnion;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
