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
void NAMESPACE0_FUN0::action(int * data) const
{
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int VAR3[50];
    int VAR4[100];
    data = VAR4;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
