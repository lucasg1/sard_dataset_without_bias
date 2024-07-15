void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = ASSERT_VALUE-1;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
<START>
        assert(data > ASSERT_VALUE);
<END>
    }
}
