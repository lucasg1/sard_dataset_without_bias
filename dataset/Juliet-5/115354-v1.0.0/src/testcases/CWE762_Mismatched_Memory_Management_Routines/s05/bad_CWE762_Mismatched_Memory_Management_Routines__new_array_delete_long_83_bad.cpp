namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(long * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    long * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long * dataCopy)
{
    data = dataCopy;
    data = new long[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    delete data;
<END>
}
}
