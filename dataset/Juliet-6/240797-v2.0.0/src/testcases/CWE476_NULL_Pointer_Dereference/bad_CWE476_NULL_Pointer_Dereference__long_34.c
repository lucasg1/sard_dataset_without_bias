typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE476_NULL_Pointer_Dereference__long_34_unionType;
void FUN0()
{
    long * data;
    CWE476_NULL_Pointer_Dereference__long_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
<START>
        printLongLine(*data);
<END>
    }
}
