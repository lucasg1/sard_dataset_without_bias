void FUN0()
{
    int data;
    data = -1;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = ASSERT_VALUE+1;
        break;
    }
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = ASSERT_VALUE+1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    assert(data > ASSERT_VALUE);
}
