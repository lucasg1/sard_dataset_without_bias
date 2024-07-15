wchar_t * FUN0(wchar_t * data)
{
    wcscpy(data, L"fixedstringtest");
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN3(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN4()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN0(data);
    FUN3(data, data);
}
wchar_t * FUN1(wchar_t * data);
void FUN6(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void FUN7()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN1(data);
    FUN6(data, data);
}
