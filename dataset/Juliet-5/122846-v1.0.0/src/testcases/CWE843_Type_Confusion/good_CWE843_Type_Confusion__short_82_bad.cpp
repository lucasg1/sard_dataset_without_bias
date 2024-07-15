namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data)
{
    printIntLine(*((int*)data));
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(void * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
