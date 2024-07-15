namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    NAMESPACE0_FUN0 * VAR1 =  new NAMESPACE0_FUN0(data);
    delete VAR1;
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
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        wchar_t dest[50] = L"";
        wcsncat(dest, data, wcslen(data));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
}
