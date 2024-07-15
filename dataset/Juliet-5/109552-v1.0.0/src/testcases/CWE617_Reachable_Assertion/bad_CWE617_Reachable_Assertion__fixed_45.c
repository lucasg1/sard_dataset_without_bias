static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR0;
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
<START>
    data = ASSERT_VALUE-1;
<END>
    VAR0 = data;
    FUN0();
}
