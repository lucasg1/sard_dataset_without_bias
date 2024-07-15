namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, L"fixedstringtest");
}
void FUN1(wchar_t * &data)
{
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN3(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN4()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
    FUN3(data, data);
}
void FUN1(wchar_t * &data);
void FUN6(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN7()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN1(data);
    FUN6(data, data);
}
} 
