namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int64_t data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int64_t data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t data) const
{
    {
<START>
        int64_t result = data + 1;
<END>
        printLongLongLine(result);
    }
}
}
