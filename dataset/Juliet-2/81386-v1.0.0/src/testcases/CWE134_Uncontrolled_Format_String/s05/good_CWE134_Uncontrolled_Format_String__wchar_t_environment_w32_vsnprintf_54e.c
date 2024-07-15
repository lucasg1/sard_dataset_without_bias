void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN3(data);
}
void FUN8(wchar_t * data);
void FUN9()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN8(data);
}
void FUN10(wchar_t * data);
void FUN11()
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
    FUN10(data);
}
void FUN5(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN10(wchar_t * data)
{
    FUN7(data);
}
void FUN17(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN0(wchar_t * data)
{
    FUN17(data, data);
}
void FUN19(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, L"%s", args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN2(wchar_t * data)
{
    FUN19(data, data);
}
