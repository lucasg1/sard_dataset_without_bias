void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = ASSERT_VALUE-1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
