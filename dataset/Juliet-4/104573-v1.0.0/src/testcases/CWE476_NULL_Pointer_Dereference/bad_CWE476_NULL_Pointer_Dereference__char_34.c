typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE476_NULL_Pointer_Dereference__char_34_unionType;
void FUN0()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        printHexCharLine(data[0]);
<END>
    }
}
