void FUN0()
{
    int h;
    int data;
    data = -1;
    for(h = 0; h < 1; h++)
    {
        data = ASSERT_VALUE+1;
    }
    assert(data > ASSERT_VALUE);
}
