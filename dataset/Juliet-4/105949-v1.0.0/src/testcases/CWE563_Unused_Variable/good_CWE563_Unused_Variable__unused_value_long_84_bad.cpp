namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(long dataCopy)
{
    data = dataCopy;
    data = 5L;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    printLongLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long data;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
void FUN1()
{
    long data;
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long dataCopy)
{
    data = dataCopy;
    data = 5L;
    printLongLine(data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data = 10L;
    printLongLine(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(long dataCopy);
    ~NAMESPACE0_FUN0();
private:
    long data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(long dataCopy);
    ~NAMESPACE0_FUN1();
private:
    long data;
};
}
