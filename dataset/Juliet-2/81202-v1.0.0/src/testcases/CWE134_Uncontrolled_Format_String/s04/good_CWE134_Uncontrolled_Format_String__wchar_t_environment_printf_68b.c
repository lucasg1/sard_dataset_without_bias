wchar_t * VAR0;
wchar_t * VAR1;
wchar_t * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    VAR1 = data;
    FUN0();
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
    VAR2 = data;
    FUN1();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
extern wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    wprintf(data);
}
void FUN1()
{
    wchar_t * data = VAR2;
    wprintf(L"%s\n", data);
}
