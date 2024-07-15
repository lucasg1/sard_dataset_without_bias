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
    twoIntsStruct VAR2;
    int VAR3 = 100;
    VAR2.intOne = 0;
    VAR2.intTwo = 0;
    data = &VAR3;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data)
{
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
}
