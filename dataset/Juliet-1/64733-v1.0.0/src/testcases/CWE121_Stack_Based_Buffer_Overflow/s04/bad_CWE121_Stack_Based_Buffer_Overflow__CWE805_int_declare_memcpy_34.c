typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_34_unionType;
void FUN0()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_34_unionType myUnion;
    int VAR0[50];
    int VAR1[100];
    data = VAR0;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
