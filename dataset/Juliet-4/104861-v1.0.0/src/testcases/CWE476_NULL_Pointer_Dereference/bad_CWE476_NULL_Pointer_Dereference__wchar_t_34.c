typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        printWcharLine(data[0]);
<END>
    }
}
