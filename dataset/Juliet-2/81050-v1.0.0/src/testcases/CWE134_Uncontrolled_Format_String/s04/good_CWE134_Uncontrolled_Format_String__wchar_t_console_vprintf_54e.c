void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN0(data);
}
void FUN2(wchar_t * data);
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
    FUN2(data);
}
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN7(data);
}
void FUN9(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN11(data);
}
void FUN6(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN6(data);
}
void FUN8(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN8(data);
}
void FUN17(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN9(wchar_t * data)
{
    FUN17(data, data);
}
void FUN19(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN11(wchar_t * data)
{
    FUN19(data, data);
}
