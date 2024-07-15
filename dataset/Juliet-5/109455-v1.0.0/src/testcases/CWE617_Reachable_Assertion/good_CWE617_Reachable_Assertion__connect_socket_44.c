void FUN0(int data)
{
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = ASSERT_VALUE+1;
    funcPtr(data);
}
