void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    fscanf(stdin, "%d", &data);
    funcPtr(data);
}
void FUN0(int data)
{
<START>
    assert(data > ASSERT_VALUE);
<END>
}
