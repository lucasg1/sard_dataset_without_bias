namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int * dataCopy)
{
    data = dataCopy;
    data = new int[100];
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    delete [] data;
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR3(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    int * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int * dataCopy)
{
    data = dataCopy;
    data = new int;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    delete data;
}
}
