void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
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
    FUN2(&data);
}
void FUN5(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    FUN5(data, data);
}
void FUN7(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN2(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    FUN7(data, data);
}
