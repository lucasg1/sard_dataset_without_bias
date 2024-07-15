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
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN7()
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
    FUN3(data);
}
void FUN9(wchar_t * data);
void FUN10(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN12(wchar_t * data)
{
    FUN11(data);
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
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN9(wchar_t * data)
{
    FUN17(data, data);
}
void FUN19(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void FUN11(wchar_t * data)
{
    FUN19(data, data);
}
