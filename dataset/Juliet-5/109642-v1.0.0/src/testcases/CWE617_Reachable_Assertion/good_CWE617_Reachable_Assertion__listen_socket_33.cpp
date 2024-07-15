namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = ASSERT_VALUE+1;
    {
        int data = dataRef;
        assert(data > ASSERT_VALUE);
    }
}
} 
