namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
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
    virtual void action(unsigned int data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(unsigned int data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(unsigned int data)
{
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
}
