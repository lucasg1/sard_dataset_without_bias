void FUN0()
{
    int i,k;
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        {
            size_t dataLen = wcslen(data);
            wchar_t * environment = GETENV(ENV_VARIABLE);
            if (environment != NULL)
            {
                wcsncat(data+dataLen, environment, 100-dataLen-1);
            }
        }
    }
    for(k = 0; k < 1; k++)
    {
        fwprintf(stdout, L"%s\n", data);
    }
}
void FUN1()
{
    int h,j;
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        wcscpy(data, L"fixedstringtest");
    }
    for(j = 0; j < 1; j++)
    {
        fwprintf(stdout, data);
    }
}
