void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = RAND32();
<START>
    assert(data > ASSERT_VALUE);
<END>
}
