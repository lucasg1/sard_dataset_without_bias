void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3(int data)
{
    FUN1(data);
}
void FUN3(int data);
void FUN5()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    FUN3(data);
}
void FUN7(int data);
void FUN0(int data)
{
    FUN7(data);
}
void FUN7(int data)
{
    assert(data > ASSERT_VALUE);
}
