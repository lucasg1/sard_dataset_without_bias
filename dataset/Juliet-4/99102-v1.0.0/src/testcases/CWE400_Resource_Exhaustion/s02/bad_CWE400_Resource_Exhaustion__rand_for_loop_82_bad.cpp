namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    count = RAND32();
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(count);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int count) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int count);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count)
{
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
}
