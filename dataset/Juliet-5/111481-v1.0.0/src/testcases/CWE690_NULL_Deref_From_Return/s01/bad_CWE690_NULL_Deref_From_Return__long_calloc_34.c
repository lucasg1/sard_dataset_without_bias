typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE690_NULL_Deref_From_Return__long_calloc_34_unionType;
void FUN0()
{
    long * data;
    CWE690_NULL_Deref_From_Return__long_calloc_34_unionType myUnion;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
