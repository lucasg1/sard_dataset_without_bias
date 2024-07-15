namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN1 * VAR2 = new NAMESPACE0_FUN1(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int64_t dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%lld", &data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (data < LLONG_MAX)
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
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
