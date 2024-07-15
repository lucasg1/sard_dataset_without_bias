namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(double * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(double * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = NULL;
    data = (double *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 1.7E300;
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(double * data)
{
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
}
