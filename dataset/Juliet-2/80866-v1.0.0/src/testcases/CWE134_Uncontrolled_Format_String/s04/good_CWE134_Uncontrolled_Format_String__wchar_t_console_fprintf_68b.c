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
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
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
    fwprintf(stdout, data);
}
void FUN1()
{
    wchar_t * data = VAR2;
    fwprintf(stdout, L"%s\n", data);
}
