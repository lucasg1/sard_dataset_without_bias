namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data) const
{
    data = 5;
    printIntLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
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
    virtual void action(int data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data) const;
};
}
