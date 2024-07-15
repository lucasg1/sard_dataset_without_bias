namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t dataCopy)
{
    data = dataCopy;
    data = L'W';
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    printWcharLine(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
} 
