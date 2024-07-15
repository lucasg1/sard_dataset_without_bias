void FUN0(int data)
{
<START>
    assert(data > ASSERT_VALUE);
<END>
}
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
