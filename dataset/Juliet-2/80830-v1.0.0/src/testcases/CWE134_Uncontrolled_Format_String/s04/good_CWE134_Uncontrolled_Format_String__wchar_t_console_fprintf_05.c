static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
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
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        fwprintf(stdout, L"%s\n", data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
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
    }
    if(staticTrue)
    {
        fwprintf(stdout, L"%s\n", data);
    }
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(staticTrue)
    {
        fwprintf(stdout, data);
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(staticTrue)
    {
        fwprintf(stdout, data);
    }
}
