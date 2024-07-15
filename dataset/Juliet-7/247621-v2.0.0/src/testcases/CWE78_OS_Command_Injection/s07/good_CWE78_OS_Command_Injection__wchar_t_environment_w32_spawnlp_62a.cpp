namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, L"*.*");
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    FUN0(data);
    _wspawnlp(_P_WAIT, COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
