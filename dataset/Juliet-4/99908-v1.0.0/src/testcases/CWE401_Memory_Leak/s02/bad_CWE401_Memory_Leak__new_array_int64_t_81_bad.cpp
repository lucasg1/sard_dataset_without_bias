namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    const NAMESPACE0_base& o = NAMESPACE0_FUN0();
    o.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data) const
{
<START>
<END>
    ; 
}
}
