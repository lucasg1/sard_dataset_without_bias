void FUN0(wchar_t * data, ...);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *, ...) = FUN0;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    funcPtr(data);
}
void FUN2(wchar_t * data, ...);
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *, ...) = FUN2;
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
    funcPtr(data);
}
void FUN0(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN2(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
