void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = ASSERT_VALUE+1;
    assert(data > ASSERT_VALUE);
}
