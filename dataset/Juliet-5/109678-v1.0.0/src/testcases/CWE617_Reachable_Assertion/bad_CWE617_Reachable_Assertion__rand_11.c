void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = RAND32();
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
