void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        fscanf(stdin, "%d", &data);
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
