namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
void FUN1()
{
    int data;
    data = -1;
    NAMESPACE0_FUN1 * VAR2 = new NAMESPACE0_FUN1(data);
    delete VAR2;
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
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int dataCopy);
    ~NAMESPACE0_FUN1();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    data = RAND32();
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int dataCopy)
{
    data = dataCopy;
    data = 7;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
}
}
