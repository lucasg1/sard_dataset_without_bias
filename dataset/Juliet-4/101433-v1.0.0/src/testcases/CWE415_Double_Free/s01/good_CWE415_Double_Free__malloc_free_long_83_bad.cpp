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
NAMESPACE0_FUN1::NAMESPACE0_FUN1(long * dataCopy)
{
    data = dataCopy;
    data = (long *)malloc(100*sizeof(long));
    free(data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    ; 
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
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
