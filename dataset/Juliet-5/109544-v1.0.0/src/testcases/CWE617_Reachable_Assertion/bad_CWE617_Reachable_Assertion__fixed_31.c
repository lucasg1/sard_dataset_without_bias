void FUN0()
{
    int data;
    data = -1;
    data = ASSERT_VALUE-1;
    {
        int dataCopy = data;
        int data = dataCopy;
<START>
        assert(data > ASSERT_VALUE);
<END>
    }
}
