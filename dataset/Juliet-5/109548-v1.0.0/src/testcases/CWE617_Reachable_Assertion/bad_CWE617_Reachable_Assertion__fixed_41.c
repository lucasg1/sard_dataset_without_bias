void FUN0(int data)
{
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
<START>
    data = ASSERT_VALUE-1;
<END>
    FUN0(data);
}
