namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(struct _twoIntsStruct * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(struct _twoIntsStruct * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}
}
