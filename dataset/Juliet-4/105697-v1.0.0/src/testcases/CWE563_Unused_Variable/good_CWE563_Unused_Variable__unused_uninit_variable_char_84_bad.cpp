namespace NAMESPACE0
{
void FUN0()
{
    char data;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char dataCopy)
{
    data = dataCopy;
    ; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data = 'C';
    printHexCharLine(data);
}
}
