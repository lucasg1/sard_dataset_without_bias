namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
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
    fscanf(stdin, "%d", &data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
}
