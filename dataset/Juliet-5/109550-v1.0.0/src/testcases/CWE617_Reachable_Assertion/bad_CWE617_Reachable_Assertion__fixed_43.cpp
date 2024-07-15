namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = ASSERT_VALUE-1;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
<START>
    assert(data > ASSERT_VALUE);
<END>
}
} 
