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
void FUN0(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN11(data);
}
void FUN9(wchar_t * data)
{
    fwprintf(stdout, data);
}
void FUN11(wchar_t * data)
{
    fwprintf(stdout, L"%s\n", data);
}