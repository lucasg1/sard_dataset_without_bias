namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int64_t * data) const
{
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * VAR2 = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * VAR3 = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = VAR3;
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
