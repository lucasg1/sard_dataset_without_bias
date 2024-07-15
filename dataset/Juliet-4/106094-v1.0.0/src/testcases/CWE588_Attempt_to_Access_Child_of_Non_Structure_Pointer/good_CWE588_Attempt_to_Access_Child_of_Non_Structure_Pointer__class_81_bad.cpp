namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data) const
{
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
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
void FUN0()
{
    void * data;
    TwoIntsClass VAR3;
    int VAR4 = 100;
    VAR3.intOne = 0;
    VAR3.intTwo = 0;
    data = &VAR3;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
