namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
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
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(short data) const
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
}
