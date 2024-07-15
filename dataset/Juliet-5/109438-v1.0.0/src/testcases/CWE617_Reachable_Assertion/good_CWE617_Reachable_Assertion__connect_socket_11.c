void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = ASSERT_VALUE+1;
    }
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        data = ASSERT_VALUE+1;
    }
    assert(data > ASSERT_VALUE);
}
