namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int countCopy);
    ~NAMESPACE0_FUN0();
private:
    int count;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    NAMESPACE0_FUN0 VAR2(count);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int countCopy)
{
    count = countCopy;
    count = RAND32();
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
}
