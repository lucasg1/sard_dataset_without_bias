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
void FUN0()
{
    short data;
    data = -1;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(short dataCopy)
{
    data = dataCopy;
    data = CHAR_MAX + 1;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
}
