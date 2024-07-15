typedef union
{
    int unionFirst;
    int unionSecond;
} CWE617_Reachable_Assertion__fixed_34_unionType;
void FUN0()
{
    int data;
    CWE617_Reachable_Assertion__fixed_34_unionType myUnion;
    data = -1;
    data = ASSERT_VALUE-1;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
<START>
        assert(data > ASSERT_VALUE);
<END>
    }
}
