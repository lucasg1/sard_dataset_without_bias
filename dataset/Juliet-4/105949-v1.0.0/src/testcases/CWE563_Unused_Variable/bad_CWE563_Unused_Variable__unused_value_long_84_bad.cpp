namespace NAMESPACE0
{
void FUN0()
{
    long data;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(long dataCopy);
    ~NAMESPACE0_FUN0();
private:
    long data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long dataCopy)
{
    data = dataCopy;
    data = 5L;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    data = 10L;
<END>
    printLongLine(data);
}
}
