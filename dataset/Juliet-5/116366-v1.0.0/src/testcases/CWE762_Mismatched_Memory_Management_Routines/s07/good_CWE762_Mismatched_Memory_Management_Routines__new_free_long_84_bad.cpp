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
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(long * dataCopy)
{
    data = dataCopy;
    data = (long *)malloc(100*sizeof(long));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
void FUN1()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN1 * VAR4 = new NAMESPACE0_FUN1(data);
    delete VAR4;
}
} 
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
