namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, NEW_PATH);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    FUN0(data);
    PUTENV(data);
}
} 
