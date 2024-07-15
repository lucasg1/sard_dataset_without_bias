namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(long * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(long * data) const;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    const NAMESPACE0_base& o = NAMESPACE0_FUN0();
    o.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(long * data) const
{
<START>
    delete [] data;
<END>
}
}
