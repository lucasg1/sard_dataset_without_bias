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
void FUN0()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    data[0] = L'\0'; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        memmove(data, source, 100*sizeof(wchar_t));
<END>
        data[100-1] = L'\0'; 
        printWLine(data);
        free(data);
    }
}
}
