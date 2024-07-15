namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(float dataCopy);
    ~NAMESPACE0_FUN0();
private:
    float data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    float data;
    data = 0.0F;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(float dataCopy)
{
    data = dataCopy;
    data = 0.0F;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
}
