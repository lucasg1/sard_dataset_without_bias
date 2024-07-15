wchar_t * FUN0(wchar_t * data)
{
    wcscpy(data, L"fixedstringtest");
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN3(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, data, args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN4()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN0(data);
    FUN3(data, data);
}
wchar_t * FUN1(wchar_t * data);
void FUN6(wchar_t * data, ...)
{
    {
        wchar_t dest[100] = L"";
        va_list args;
        va_start(args, data);
        _vsnwprintf(dest, 100-1, L"%s", args);
        va_end(args);
        printWLine(dest);
    }
}
void FUN7()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN1(data);
    FUN6(data, data);
}
