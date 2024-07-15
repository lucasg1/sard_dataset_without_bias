namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int dataCopy)
{
    data = dataCopy;
    data = 5;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    printIntLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    NAMESPACE0_FUN0 VAR3(data);
}
} 
