namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)malloc(1*sizeof(int64_t));
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data) const
{
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
}
