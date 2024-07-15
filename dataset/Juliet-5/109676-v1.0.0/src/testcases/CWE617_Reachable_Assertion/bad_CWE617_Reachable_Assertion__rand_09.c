void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = RAND32();
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
