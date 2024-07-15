namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    char data;
    data = ' ';
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char dataCopy)
{
    data = dataCopy;
    data = CHAR_MAX;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
}
