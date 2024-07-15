typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE690_NULL_Deref_From_Return__long_realloc_34_unionType;
void FUN0()
{
    long * data;
    CWE690_NULL_Deref_From_Return__long_realloc_34_unionType myUnion;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
