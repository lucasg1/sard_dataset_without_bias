namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int;
    delete data;
    const NAMESPACE0_base& o = NAMESPACE0_FUN0();
    o.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data) const
{
<START>
    delete data;
<END>
}
}
