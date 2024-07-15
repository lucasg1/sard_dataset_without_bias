void FUN0(void * dataVoidPtr);
void FUN1()
{
    int data;
    data = -1;
    data = ASSERT_VALUE-1;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * dataPtr = (int *)dataVoidPtr;
    int data = (*dataPtr);
<START>
    assert(data > ASSERT_VALUE);
<END>
}
