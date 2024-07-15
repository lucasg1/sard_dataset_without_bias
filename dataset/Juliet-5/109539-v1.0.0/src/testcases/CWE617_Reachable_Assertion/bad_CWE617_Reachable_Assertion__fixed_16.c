void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = ASSERT_VALUE-1;
        break;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
