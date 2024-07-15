void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalReturnsTrue())
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
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
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
    }
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        wcscpy(data, L"fixedstringtest");
    }
    if(globalReturnsTrue())
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}
