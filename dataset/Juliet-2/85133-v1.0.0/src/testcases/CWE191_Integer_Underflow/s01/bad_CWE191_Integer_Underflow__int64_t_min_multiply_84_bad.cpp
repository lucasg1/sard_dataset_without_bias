namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int64_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int64_t data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t dataCopy)
{
    data = dataCopy;
    data = LLONG_MIN;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data < 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
}
