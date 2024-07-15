typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE690_NULL_Deref_From_Return__int64_t_calloc_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE690_NULL_Deref_From_Return__int64_t_calloc_34_unionType myUnion;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
<START>
        data[0] = 5LL;
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
