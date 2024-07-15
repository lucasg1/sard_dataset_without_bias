void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = ASSERT_VALUE+1;
    }
    else
    {
        data = ASSERT_VALUE+1;
    }
    assert(data > ASSERT_VALUE);
}
