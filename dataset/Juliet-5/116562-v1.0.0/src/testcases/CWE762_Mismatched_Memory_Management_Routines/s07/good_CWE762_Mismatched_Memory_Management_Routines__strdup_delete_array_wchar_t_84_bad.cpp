namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(wchar_t * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    wchar_t * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(wchar_t * dataCopy)
{
    data = dataCopy;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR3 = new NAMESPACE0_FUN0(data);
    delete VAR3;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN1 * VAR4 = new NAMESPACE0_FUN1(data);
    delete VAR4;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    data = new wchar_t[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    delete [] data;
}
}
