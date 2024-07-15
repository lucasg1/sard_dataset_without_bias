namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long dataCopy)
{
    data = dataCopy;
    ; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data = 5L;
    printLongLine(data);
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
void FUN0()
{
    long data;
    NAMESPACE0_FUN0 VAR3(data);
}
} 
