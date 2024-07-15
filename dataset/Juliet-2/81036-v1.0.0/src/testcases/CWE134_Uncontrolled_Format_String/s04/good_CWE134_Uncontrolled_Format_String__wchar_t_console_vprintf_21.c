static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(wchar_t * data, ...)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            va_list args;
            va_start(args, data);
            vwprintf(L"%s", args);
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
    VAR0 = 0; 
    FUN0(data, data);
}
void FUN2(wchar_t * data, ...)
{
    if(VAR1)
    {
        {
            va_list args;
            va_start(args, data);
            vwprintf(L"%s", args);
            va_end(args);
        }
    }
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
    VAR1 = 1; 
    FUN2(data, data);
}
void FUN4(wchar_t * data, ...)
{
    if(VAR2)
    {
        {
            va_list args;
            va_start(args, data);
            vwprintf(data, args);
            va_end(args);
        }
    }
}
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    VAR2 = 1; 
    FUN4(data, data);
}
