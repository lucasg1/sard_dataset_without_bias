void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    fscanf(stdin, "%d", &data);
<START>
    assert(data > ASSERT_VALUE);
<END>
}
