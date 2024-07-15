namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * VAR2 = (int *)ALLOCA(50*sizeof(int));
    int * VAR3 = (int *)ALLOCA(100*sizeof(int));
    data = VAR3;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data) const
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
}
