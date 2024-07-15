namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long data) const
{
    printLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long data;
    data = 5L;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
