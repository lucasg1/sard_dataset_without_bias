void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(wchar_t * dataArray[]);
void FUN3()
{
    wchar_t * data;
    wchar_t * dataArray[5];
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
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, data);
        printWLine(dest);
    }
}
void FUN2(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, L"%s", data);
        printWLine(dest);
    }
}
