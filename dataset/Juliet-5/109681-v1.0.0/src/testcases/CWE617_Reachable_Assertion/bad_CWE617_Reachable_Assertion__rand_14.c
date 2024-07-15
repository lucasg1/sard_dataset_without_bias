void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
    {
        data = RAND32();
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
