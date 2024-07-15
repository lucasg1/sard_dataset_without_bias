namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscat(data, NEW_PATH);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    FUN0(data);
    PUTENV(data);
}
} 
