namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(unsigned int dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(unsigned int dataCopy);
    ~NAMESPACE0_FUN0();
private:
    unsigned int data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(unsigned int dataCopy);
    ~NAMESPACE0_FUN1();
private:
    unsigned int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(unsigned int dataCopy)
{
    data = dataCopy;
    data = UINT_MAX;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    unsigned int data;
    data = 0;
    NAMESPACE0_FUN1 VAR5(data);
}
} 