namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(unsigned int dataCopy);
    ~NAMESPACE0_FUN0();
private:
    unsigned int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(unsigned int dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%u", &data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
}
