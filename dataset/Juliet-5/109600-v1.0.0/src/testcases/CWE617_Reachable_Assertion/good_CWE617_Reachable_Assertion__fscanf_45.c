static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR1;
    assert(data > ASSERT_VALUE);
}
void FUN1()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    VAR1 = data;
    FUN0();
}
