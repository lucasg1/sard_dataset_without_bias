namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
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
    wcscat(data, L"*.*");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
}
