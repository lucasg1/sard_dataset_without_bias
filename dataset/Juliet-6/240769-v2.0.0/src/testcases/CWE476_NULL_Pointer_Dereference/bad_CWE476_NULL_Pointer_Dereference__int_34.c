typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE476_NULL_Pointer_Dereference__int_34_unionType;
void FUN0()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
<START>
        printIntLine(*data);
<END>
    }
}
