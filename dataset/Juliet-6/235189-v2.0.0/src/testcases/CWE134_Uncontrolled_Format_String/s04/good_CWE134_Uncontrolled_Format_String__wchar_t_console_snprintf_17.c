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
    for(k = 0; k < 1; k++)
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
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}
