namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(short dataCopy)
{
    data = dataCopy;
    data = (short)RAND32();
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(short dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        short result = data + 1;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = 0;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
void FUN1()
{
    short data;
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
    NAMESPACE0_FUN0(short dataCopy);
    ~NAMESPACE0_FUN0();
private:
    short data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(short dataCopy);
    ~NAMESPACE0_FUN1();
private:
    short data;
};
}