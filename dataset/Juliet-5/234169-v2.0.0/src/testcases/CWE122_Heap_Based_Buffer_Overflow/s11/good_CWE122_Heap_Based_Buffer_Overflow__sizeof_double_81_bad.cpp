namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(double * data) const
{
    printDoubleLine(*data);
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(double * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(double * data) const;
};
}
