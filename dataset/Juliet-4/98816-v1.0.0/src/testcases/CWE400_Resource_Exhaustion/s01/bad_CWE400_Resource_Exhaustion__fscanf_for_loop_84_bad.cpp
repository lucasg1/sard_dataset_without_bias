namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(count);
    delete VAR1;
}
} 
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int countCopy)
{
    count = countCopy;
    fscanf(stdin, "%d", &count);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}
}
