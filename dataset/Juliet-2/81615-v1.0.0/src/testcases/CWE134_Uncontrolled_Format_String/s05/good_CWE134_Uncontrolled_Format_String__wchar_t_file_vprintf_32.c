void FUN0(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(data, args);
        va_end(args);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wcscpy(data, L"fixedstringtest");
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        FUN0(data, data);
    }
}
void FUN2(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vwprintf(L"%s", args);
        va_end(args);
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
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
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        FUN2(data, data);
    }
}
