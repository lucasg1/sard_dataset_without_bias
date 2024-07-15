int FUN0(int data)
{
    fscanf(stdin, "%d", &data);
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
<START>
    assert(data > ASSERT_VALUE);
<END>
}
