void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        data = ASSERT_VALUE-1;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
