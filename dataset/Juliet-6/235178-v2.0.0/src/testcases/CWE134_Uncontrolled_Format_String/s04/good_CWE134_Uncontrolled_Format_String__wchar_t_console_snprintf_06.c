static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
    }
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(STATIC_CONST_FIVE==5)
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}
