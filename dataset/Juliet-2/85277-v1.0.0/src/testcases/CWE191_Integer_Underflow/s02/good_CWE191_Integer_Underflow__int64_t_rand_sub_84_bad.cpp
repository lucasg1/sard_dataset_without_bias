namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t dataCopy)
{
    data = dataCopy;
    data = -2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int64_t dataCopy)
{
    data = dataCopy;
    data = (int64_t)RAND64();
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int64_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int64_t data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int64_t dataCopy);
    ~NAMESPACE0_FUN1();
private:
    int64_t data;
};
}
