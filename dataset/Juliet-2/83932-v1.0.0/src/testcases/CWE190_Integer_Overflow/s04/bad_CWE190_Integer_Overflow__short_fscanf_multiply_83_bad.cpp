namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(short dataCopy);
    ~NAMESPACE0_FUN0();
private:
    short data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(short dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%hd", &data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
}
