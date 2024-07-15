void FUN0(int data)
{
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    FUN0(data);
}
