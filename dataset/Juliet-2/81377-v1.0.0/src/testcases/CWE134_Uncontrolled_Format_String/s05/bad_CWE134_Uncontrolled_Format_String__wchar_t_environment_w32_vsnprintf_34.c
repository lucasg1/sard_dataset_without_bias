typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE134_Uncontrolled_Format_String__wchar_t_environment_w32_vsnprintf_34_unionType;
void FUN0(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
<START>
        _vsnwprintf(dest, 100-1, data, args);
<END>
        va_end(args);
        printWLine(dest);
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
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        FUN0(data, data);
    }
}
