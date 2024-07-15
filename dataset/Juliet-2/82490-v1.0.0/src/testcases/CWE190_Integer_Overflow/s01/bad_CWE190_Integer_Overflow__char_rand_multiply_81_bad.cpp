namespace NAMESPACE0
{
void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(char data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(char data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(char data) const
{
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
}
