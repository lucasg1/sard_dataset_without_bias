namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(unsigned int dataCopy)
{
    data = dataCopy;
    data = UINT_MAX;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(unsigned int dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    data = 0;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    NAMESPACE0_FUN1 * VAR4 = new NAMESPACE0_FUN1(data);
    delete VAR4;
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
