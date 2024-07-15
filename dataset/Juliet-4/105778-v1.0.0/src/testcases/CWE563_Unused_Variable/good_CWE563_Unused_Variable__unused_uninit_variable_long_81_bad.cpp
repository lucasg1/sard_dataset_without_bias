namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long data) const
{
    data = 5L;
    printLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long data;
    ; 
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
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
