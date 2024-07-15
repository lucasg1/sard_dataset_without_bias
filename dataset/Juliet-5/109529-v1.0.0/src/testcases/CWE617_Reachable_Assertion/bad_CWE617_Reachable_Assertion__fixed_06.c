static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    if(STATIC_CONST_FIVE==5)
    {
        data = ASSERT_VALUE-1;
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}
