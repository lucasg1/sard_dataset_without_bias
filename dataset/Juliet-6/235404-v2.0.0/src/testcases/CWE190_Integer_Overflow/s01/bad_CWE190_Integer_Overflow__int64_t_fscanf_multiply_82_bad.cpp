namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data)
{
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
}
