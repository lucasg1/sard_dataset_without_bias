namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t dataCopy)
{
    data = dataCopy;
    data = L'W';
    printf("%02lx\n", data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data = L'Z';
    printf("%02lx\n", data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(wchar_t dataCopy);
    ~NAMESPACE0_FUN1();
private:
    wchar_t data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(wchar_t dataCopy)
{
    data = dataCopy;
    data = L'W';
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    printf("%02lx\n", data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t data;
    NAMESPACE0_FUN0 * VAR4 = new NAMESPACE0_FUN0(data);
    delete VAR4;
}
void FUN1()
{
    wchar_t data;
    NAMESPACE0_FUN1 * VAR5 = new NAMESPACE0_FUN1(data);
    delete VAR5;
}
} 
