void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
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
    FUN1(data);
}
void FUN4(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN4(data);
}
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN8(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vfwprintf(stdout, data, args);
<END>
        va_end(args);
    }
}
void FUN4(wchar_t * data)
{
    FUN8(data, data);
}
