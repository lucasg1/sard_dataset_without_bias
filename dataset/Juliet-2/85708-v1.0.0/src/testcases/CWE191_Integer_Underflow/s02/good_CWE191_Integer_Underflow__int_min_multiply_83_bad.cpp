namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int dataCopy)
{
    data = dataCopy;
    data = -2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data < 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    data = INT_MIN;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if(data < 0) 
    {
        if (data > (INT_MIN/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    int data;
    data = 0;
    NAMESPACE0_FUN1 VAR4(data);
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
