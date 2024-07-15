typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_34_unionType;
void FUN0()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_loop_34_unionType myUnion;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            size_t i;
            for (i = 0; i < 10; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
