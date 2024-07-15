namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(unsigned int data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(unsigned int data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(unsigned int data) const
{
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
}