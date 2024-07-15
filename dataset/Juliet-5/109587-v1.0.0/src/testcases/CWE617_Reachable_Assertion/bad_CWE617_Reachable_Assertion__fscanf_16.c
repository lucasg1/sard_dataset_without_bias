void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
