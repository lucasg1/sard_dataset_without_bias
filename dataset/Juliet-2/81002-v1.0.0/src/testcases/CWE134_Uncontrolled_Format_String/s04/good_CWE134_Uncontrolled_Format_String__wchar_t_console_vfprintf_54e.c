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
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN7()
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
    FUN6(data);
}
void FUN1(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN3(data);
}
void FUN13(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN13(data);
}
void FUN15(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN15(data);
}
void FUN17(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void FUN13(wchar_t * data)
{
    FUN17(data, data);
}
void FUN19(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void FUN15(wchar_t * data)
{
    FUN19(data, data);
}
