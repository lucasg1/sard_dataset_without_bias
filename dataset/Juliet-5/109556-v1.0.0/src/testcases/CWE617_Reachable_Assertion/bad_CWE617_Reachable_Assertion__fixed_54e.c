void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5(int data)
{
    FUN1(data);
}
void FUN5(int data);
void FUN7()
{
    int data;
    data = -1;
    data = ASSERT_VALUE-1;
    FUN5(data);
}
void FUN2(int data)
{
<START>
    assert(data > ASSERT_VALUE);
<END>
}
