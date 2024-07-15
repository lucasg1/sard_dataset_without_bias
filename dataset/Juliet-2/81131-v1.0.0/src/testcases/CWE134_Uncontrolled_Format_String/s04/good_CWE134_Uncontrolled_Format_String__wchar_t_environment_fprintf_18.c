void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    goto source;
source:
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    goto sink;
sink:
    fwprintf(stdout, L"%s\n", data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    goto source;
source:
    wcscpy(data, L"fixedstringtest");
    goto sink;
sink:
    fwprintf(stdout, data);
}
