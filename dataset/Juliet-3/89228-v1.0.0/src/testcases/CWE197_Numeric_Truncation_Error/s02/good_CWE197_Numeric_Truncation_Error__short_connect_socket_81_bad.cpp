namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data) const
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(short data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(short data) const;
};
}
