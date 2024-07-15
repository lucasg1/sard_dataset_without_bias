namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(short data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(short data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    data = SHRT_MIN;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data)
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
}
