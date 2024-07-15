typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE476_NULL_Pointer_Dereference__int64_t_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE476_NULL_Pointer_Dereference__int64_t_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
<START>
        printLongLongLine(*data);
<END>
    }
}
