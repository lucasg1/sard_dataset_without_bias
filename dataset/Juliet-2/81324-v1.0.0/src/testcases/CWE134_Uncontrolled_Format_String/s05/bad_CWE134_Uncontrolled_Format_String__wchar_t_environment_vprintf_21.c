static int VAR0 = 0;
void FUN0(wchar_t * data, ...)
{
    if(VAR0)
    {
        {
            va_list args;
            va_start(args, data);
<START>
            vwprintf(data, args);
<END>
            va_end(args);
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
    VAR0 = 1; 
    FUN0(data, data);
}
