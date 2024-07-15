namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
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
    virtual void action(TwoIntsClass * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(TwoIntsClass * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(TwoIntsClass * data)
{
<START>
    delete [] data;
<END>
}
}
