static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(wchar_t * data, ...)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
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
    VAR0 = 0; 
    FUN0(data, data);
}
void FUN2(wchar_t * data, ...)
{
    if(VAR1)
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
}
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
    VAR1 = 1; 
    FUN2(data, data);
}
void FUN4(wchar_t * data, ...)
{
    if(VAR2)
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
}
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    VAR2 = 1; 
    FUN4(data, data);
}
