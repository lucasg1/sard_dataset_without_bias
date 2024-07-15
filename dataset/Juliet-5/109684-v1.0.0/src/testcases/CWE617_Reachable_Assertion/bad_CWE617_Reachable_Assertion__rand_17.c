void FUN0()
{
    int i;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        data = RAND32();
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
