void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = -1;
    data = ASSERT_VALUE-1;
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
<START>
    assert(data > ASSERT_VALUE);
<END>
}
