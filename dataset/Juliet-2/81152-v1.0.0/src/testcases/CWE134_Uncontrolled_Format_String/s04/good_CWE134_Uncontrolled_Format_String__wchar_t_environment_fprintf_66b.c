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
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    fwprintf(stdout, data);
}
void FUN2(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    fwprintf(stdout, L"%s\n", data);
}
