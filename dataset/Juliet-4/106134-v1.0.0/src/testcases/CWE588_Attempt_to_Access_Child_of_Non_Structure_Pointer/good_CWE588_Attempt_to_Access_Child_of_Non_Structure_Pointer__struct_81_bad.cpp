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
    twoIntsStruct VAR2;
    int VAR3 = 100;
    VAR2.intOne = 0;
    VAR2.intTwo = 0;
    data = &VAR2;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data) const
{
    printStructLine((twoIntsStruct *)data);
}
}
