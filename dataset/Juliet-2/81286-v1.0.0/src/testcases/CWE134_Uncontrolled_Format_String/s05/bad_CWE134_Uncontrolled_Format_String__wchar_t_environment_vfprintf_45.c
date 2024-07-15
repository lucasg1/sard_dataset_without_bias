static wchar_t * VAR0;
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0(wchar_t * data, ...)
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
void FUN1()
{
    wchar_t * data = VAR0;
    FUN0(data, data);
}
void FUN2()
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
    VAR0 = data;
    FUN1();
}
