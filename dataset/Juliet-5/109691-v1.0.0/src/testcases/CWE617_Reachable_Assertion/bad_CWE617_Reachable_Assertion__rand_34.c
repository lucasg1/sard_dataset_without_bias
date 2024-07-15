typedef union
{
    int unionFirst;
    int unionSecond;
} CWE617_Reachable_Assertion__rand_34_unionType;
void FUN0()
{
    int data;
    CWE617_Reachable_Assertion__rand_34_unionType myUnion;
    data = -1;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
<START>
        assert(data > ASSERT_VALUE);
<END>
    }
}
