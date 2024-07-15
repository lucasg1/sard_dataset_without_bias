void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%d", &data);
    }
    else
    {
        data = ASSERT_VALUE+1;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
