namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(TwoIntsClass * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    TwoIntsClass * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(TwoIntsClass * dataCopy)
{
    data = dataCopy;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    delete data;
<END>
}
}
