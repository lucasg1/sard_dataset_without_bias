namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN0 VAR1(data);
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN1 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int64_t dataCopy)
{
    data = dataCopy;
    data = LLONG_MIN;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if(data < 0) 
    {
        if (data > (LLONG_MIN/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
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
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t dataCopy)
{
    data = dataCopy;
    data = -2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
}
