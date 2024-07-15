namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(long * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    long * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(long * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    long * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long * dataCopy)
{
    data = dataCopy;
    data = new long[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    delete [] data;
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR4(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(long * dataCopy)
{
    data = dataCopy;
    data = new long;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    delete data;
}
}
