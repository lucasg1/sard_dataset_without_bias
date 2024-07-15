void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    FUN2(data);
}
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN7(data);
}
void FUN6(wchar_t * data);
void FUN10(wchar_t * data)
{
    FUN6(data);
}
void FUN8(wchar_t * data);
void FUN12(wchar_t * data)
{
    FUN8(data);
}
void FUN10(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN10(data);
}
void FUN12(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN12(data);
}
void FUN17(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN5(wchar_t * data)
{
    FUN17(data, data);
}
void FUN19(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN7(wchar_t * data)
{
    FUN19(data, data);
}
