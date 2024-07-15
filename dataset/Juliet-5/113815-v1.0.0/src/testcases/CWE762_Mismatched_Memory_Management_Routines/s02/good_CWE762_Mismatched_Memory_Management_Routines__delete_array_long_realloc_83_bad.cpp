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
void FUN0()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR3(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(long * dataCopy)
{
    data = dataCopy;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    free(data);
}
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
