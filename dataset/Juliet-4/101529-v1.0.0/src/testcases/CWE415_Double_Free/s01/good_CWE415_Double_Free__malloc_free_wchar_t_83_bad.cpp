namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    free(data);
}
}
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
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    free(data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    ; 
}
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
