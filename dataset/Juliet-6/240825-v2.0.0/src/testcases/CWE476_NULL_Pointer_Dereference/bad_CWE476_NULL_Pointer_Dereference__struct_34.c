typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE476_NULL_Pointer_Dereference__struct_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
<START>
        printIntLine(data->intOne);
<END>
    }
}
