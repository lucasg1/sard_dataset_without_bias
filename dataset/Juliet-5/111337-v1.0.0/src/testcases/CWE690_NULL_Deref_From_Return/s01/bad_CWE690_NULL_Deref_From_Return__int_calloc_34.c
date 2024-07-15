typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE690_NULL_Deref_From_Return__int_calloc_34_unionType;
void FUN0()
{
    int * data;
    CWE690_NULL_Deref_From_Return__int_calloc_34_unionType myUnion;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
