namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data)
{
    assert(data > ASSERT_VALUE);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    data = ASSERT_VALUE+1;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data);
};
}
