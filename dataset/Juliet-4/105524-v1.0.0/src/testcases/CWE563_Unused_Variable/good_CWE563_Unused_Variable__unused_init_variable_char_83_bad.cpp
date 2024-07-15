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
    data = 'C';
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    printHexCharLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char data;
    NAMESPACE0_FUN0 VAR3(data);
}
} 
