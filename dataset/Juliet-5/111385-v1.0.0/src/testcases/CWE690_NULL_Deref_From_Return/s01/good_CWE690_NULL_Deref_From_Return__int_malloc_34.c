typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE690_NULL_Deref_From_Return__int_malloc_34_unionType;
void FUN0()
{
    int * data;
    CWE690_NULL_Deref_From_Return__int_malloc_34_unionType myUnion;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
