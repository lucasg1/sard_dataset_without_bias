void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    while(1)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
        break;
    }
    while(1)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    while(1)
    {
        wcscpy(data, L"fixedstringtest");
        break;
    }
    while(1)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
        break;
    }
}
