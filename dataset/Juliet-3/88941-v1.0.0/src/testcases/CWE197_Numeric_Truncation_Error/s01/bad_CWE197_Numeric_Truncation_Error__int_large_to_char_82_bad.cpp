namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
}
