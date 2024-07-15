void FUN0(wchar_t * data, ...)
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
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(5==5)
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
    if(5==5)
    {
        FUN0(data, data);
    }
}
