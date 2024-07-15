typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE690_NULL_Deref_From_Return__wchar_t_malloc_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE690_NULL_Deref_From_Return__wchar_t_malloc_34_unionType myUnion;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        wcscpy(data, L"Initialize");
<END>
        printWLine(data);
        free(data);
    }
}
