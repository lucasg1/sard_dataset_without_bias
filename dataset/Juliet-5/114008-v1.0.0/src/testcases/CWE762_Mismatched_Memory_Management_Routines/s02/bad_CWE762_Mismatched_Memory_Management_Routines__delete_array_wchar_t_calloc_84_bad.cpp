namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
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
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    delete [] data;
<END>
}
}
