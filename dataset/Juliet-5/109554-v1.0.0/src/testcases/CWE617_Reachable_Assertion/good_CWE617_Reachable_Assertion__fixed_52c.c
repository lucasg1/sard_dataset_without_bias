void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    FUN1(data);
}
void FUN0(int data)
{
    assert(data > ASSERT_VALUE);
}
