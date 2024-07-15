void FUN0()
{
    int i;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &data);
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
