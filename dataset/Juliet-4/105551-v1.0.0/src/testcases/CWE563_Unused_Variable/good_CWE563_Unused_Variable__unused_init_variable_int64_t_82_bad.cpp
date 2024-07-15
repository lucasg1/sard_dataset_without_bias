namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data)
{
    printLongLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 5LL;
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
    virtual void action(int64_t data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t data);
};
}
