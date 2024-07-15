namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data) const
{
<START>
    printIntLine(*((int*)data));
<END>
}
}
