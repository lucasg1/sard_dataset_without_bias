static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = ASSERT_VALUE-1;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
