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
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN0(data);
    fwprintf(stdout, data);
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN1(data);
    fwprintf(stdout, L"%s\n", data);
}
