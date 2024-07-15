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
void FUN0()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(count);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
}
