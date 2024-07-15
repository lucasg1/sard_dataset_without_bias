namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = ASSERT_VALUE+1;
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN2()
{
    int data;
    data = -1;
    FUN0(data);
    assert(data > ASSERT_VALUE);
}
} 
