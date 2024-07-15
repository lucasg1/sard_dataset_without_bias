namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long * data)
{
<START>
    data[0] = 5L;
<END>
    printLongLine(data[0]);
    free(data);
}
}
