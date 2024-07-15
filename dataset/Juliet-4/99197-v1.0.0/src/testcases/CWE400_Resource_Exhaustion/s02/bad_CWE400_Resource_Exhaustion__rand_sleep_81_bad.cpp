namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    count = RAND32();
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(count);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int count) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int count) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count) const
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
}
