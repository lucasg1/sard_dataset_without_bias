void FUN0()
{
    int data;
    data = -1;
    if(0)
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
    if(1)
    {
        data = ASSERT_VALUE+1;
    }
    assert(data > ASSERT_VALUE);
}
